#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define __DEBUG

#ifdef __DEBUG
#define DEBUG_LINE() printf("[%s:%s] line=%d\r\n", __FILE__, __FUNCTION__, __LINE__)
#define DEBUG_INFO(fmt, args...) printf("\033[33m[%s:%d]\033[0m "#fmt"\r\n", __func__, __LINE__, ##args)
#define DEBUG_ERR(fmt, args...) printf("\033[46;31m[%s:%d]\033[40;37m errno=%d "#fmt"\r\n", __func__, __LINE__, errno, ##args)
#else
#define DEBUG_LINE()
#define DEBUG_INFO()
#define DEBUG_ERR()
#endif

/*
 * __FILE__ 打印出调试信息所在的文件名
 * __FUNCTION__ 将会打印出调试信息所在的函数名
 * __LINE__ 将会打印出调试信息所在文件的行号
 *
 * */
int main(void)
{
	char *s = "hello";
	DEBUG_LINE();
	DEBUG_INFO("%s\n", s);
	DEBUG_ERR("test debug error: s:%s\n", s);
	return 0;
}
