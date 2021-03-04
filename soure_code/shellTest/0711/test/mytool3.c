#ifndef _MYTOOL3_C_
#define _MYTOOL3_C_

#include "mytool3.h"

void mytool3_printf(char *str)
{
	DEBUG_INFO("this is mytool3 printf: %s\n", str);
}

void mytool3_add(int a, int b)
{
	DEBUG_INFO("sum = %d", a + b);
}


#endif
