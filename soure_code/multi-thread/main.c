#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define SIZE 11

typedef int QueueData;

typedef struct _queue
{
	int data[SIZE];
	int front;
	int rear;
} Queue;

typedef struct _sem
{
	sem_t empty;
	sem_t full;
	Queue q;
} Sem;

int num = 0;
pthread_mutex_t mutex;
Sem sem;

int InitQueue(Queue *q)
{
	if (q == NULL)
	{
		return FALSE;
	}

	q->front = 0;
	q->rear = 0;

	return TRUE;
}

int QueueEmpty(Queue *q)
{
	if (q == NULL)
	{
		return FALSE;
	}

	return q->front == q->rear;
}

int QueueFull(Queue *q)
{
	if (q == NULL)
	{
		return FALSE;
	}

	return q->front == (q->rear+1)%SIZE;
}

int DeQueue(Queue *q, int *x)
{
	if (q == NULL)
	{
		return FALSE;
	}

	if (QueueEmpty(q))
	{
		return FALSE;
	}

	q->front = (q->front + 1) % SIZE;
	*x = q->data[q->front];

	return TRUE;
}

int EnQueue(Queue *q, int x)
{
	if (q == NULL)
	{
		return FALSE;
	}

	if (QueueFull(q))
	{
		return FALSE;
	}

	q->rear = (q->rear+1) % SIZE;
	q->data[q->rear] = x;

	return TRUE;
}

void *Producer()
{
	while(1)
	{
		int time = rand() % 10 + 1;
		usleep(time * 100000);

		/*信号量的p操作*/
		sem_wait(&sem.empty);
		pthread_mutex_lock(&mutex);

		num++;
		EnQueue(&(sem.q), num);
		printf("==> UDEBUG producer a message: %d\n", num);

		pthread_mutex_unlock(&mutex);
		/*信号量的v操作*/
		sem_post(&sem.full);
	}
}

void *Consumer()
{
	while(1)
	{
		int time = rand() % 10 + 1;
		usleep(time * 100000);

		/*信号量的p操作*/
		sem_wait(&sem.full);
		pthread_mutex_lock(&mutex);

		num--;
		DeQueue(&sem.q, &num);
		printf("==> UDEBUG consumer a message: %d\n", num);

		pthread_mutex_unlock(&mutex);
		/*信号量的v操作*/
		sem_post(&sem.empty);
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	sem_init(&sem.empty, 0, 10);
	sem_init(&sem.full, 0, 0);

	pthread_mutex_init(&mutex, NULL);
	InitQueue(&(sem.q));

	pthread_t producid;
	pthread_t consumid;

	pthread_create(&producid, NULL, Producer, NULL);
	pthread_create(&consumid, NULL, Consumer, NULL);

	pthread_join(consumid, NULL);

	sem_destroy(&sem.empty);
	sem_destroy(&sem.full);

	pthread_mutex_destroy(&mutex);

	return 0;
}

