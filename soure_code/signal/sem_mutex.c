#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <semaphore.h>

void *thread_function(void *arg);
sem_t bin_sem;

#define WORK_SIZE 1024
/*use store input thing*/
char work_area[WORK_SIZE];

int main()
{
	/*temp store some command return result*/
	int res;
	/*new thread*/
	pthread_t a_thread;
	/*store thread result of handling*/
	void *thread_result;

	/*initialize sem and set inital value is 0*/
	res = sem_init(&bin_sem, 0, 0);
	if (res != 0)
	{
		printf("==> UDEBUG(Semaphore initialization failed)\n");
		return -1;
	}

	/*new thread*/
	res = pthread_create(&a_thread, NULL, thread_function, NULL);
	if (res != 0)
	{
		printf("==> UDEBUG(Thread creation failed)\n");
		return -1;
	}

	printf("==> input some text, Enter 'end' to finish\n");
	/*When a string does not begin with end in the workspace*/
	while (strncmp("end", work_area, 3) != 0)
	{
		printf("==> UDEUBG[%s -- %d]\n", __FUNCTION__, __LINE__);
		/*Get input from standard input into the Work area*/
		fgets(work_area, WORK_SIZE, stdin);
		/*sem +1*/
		sem_post(&bin_sem);
		printf("==> UDEBUG[%s -- %d] bin_sem = %d\n", __FUNCTION__, __LINE__, bin_sem);
	}
	printf("Waiting for thread to finish...\n");

	res = pthread_join(a_thread, &thread_result);
	if (res != 0)
	{
		printf("==> UDEBUG(Thread join failed)\n");
		return -1;
	}
	
	printf("Thread joined\n");
	/*destroy semaphore*/
	sem_destroy(&bin_sem);

	return 0;
}

void *thread_function(void *arg)
{
	/*waiting semaphore when it greater than zero is going down by 1*/
	sem_wait(&bin_sem);
	printf("==> UDEBUG[%s -- %d] bin_sem = %d\n", __FUNCTION__, __LINE__, bin_sem);
	while (strncmp("end", work_area, 3) != 0)
	{
		printf("you input %d characters\n", strlen(work_area) - 1);
		/*waiting semaphore when it greater than zero is going down by 1*/
		sem_wait(&bin_sem);
		printf("==> UDEBUG[%s -- %d] bin_sem = %d\n", __FUNCTION__, __LINE__, bin_sem);
	}

	pthread_exit(NULL);
}
