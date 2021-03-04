#ifndef _MYTOOL1_C_
#define _MYTOOL1_C_

#include "mytool1.h"

int gtool1_a = 1;
int gtool1_b = 2;

void mytool1_print(char *print_str)
{
	DEBUG_INFO("this is mytool1 print %s", print_str);
}

void mytool1_add(int a, int b)
{
	DEBUG_INFO("sum = %d", a + b);
}

#endif
