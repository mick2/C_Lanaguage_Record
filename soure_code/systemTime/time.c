#include <stdio.h>
#include <time.h>

#if 0
/*kernel get time*/
void test1(void)
{
	int s_1 = 0;
	int s_2 = 0;
	int us_1 = 0;
	int us_2 = 0;

	struct timeval time_s;
	do_gettimeofday(&time_s);
	s_1 = time_s.tv_sec;
	us_1 = time_s.tv_usec;
	printf("s_1 = %d\n", s_1);
	printf("us_1 = %d\n", us_1);


	printf("====================================\n");

	do_gettimeofday(&time_s);
	s_2 = time_s.tv_sec;
	us_2 = time_s.tv_usec;
	printf("s_2 = %d\n", s_2);
	printf("us_2 = %d\n", us_2);
}

/*user get time*/
void test2(void)
{
	clock_t startTime;
	clock_t endTime;
	startTime = clock();
	printf("startTime = %ld\n", startTime);
	rtcore_usr_init_endTime = clock();
	printf("endTime = %ld\n", endTime);
}
#endif

int main()
{
	int i = 0;

	time_t  t;
	struct  tm  * lt;
	time  (&t); //获取Unix时间戳。
	lt =  localtime  (&t); //转为时间结构。
	printf("%d/%d/%d %d:%d:%d\n" ,lt->tm_year+1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec); //输出结果

	for (i = 0; i < 100000; i++)
	{
		printf("xxxxxx\t");
		__asm__("nop");
	}

	time  (&t); //获取Unix时间戳。
	lt =  localtime  (&t); //转为时间结构。
	printf("%d/%d/%d %d:%d:%d\n" ,lt->tm_year+1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec); //输出结果

	return  0;
}

