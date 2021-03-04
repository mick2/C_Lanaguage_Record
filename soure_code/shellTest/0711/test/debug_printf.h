#ifndef _PRINT_H_
#define _PRINT_H_

#include<stdio.h>
#include<string.h>

#define	DEBUG_INFO(fmt, args...)	printf("\033[33m[%s:%d]\033[0m "#fmt"\r\n", __FUNCTION__, __LINE__, ##args)


#endif
