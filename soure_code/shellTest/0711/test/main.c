#include<stdio.h>
#include "mytool2.h"
#include "mytool1.h"
#include "mytool3.h"

int main(int argc, char **argv)
{
	int a = 10;
	int b = 20;
	gtool1_a = 11;
	gtool1_b = 22;
	gtool2_a = 33;
	gtool2_b = 44;
	mytool1_print("hello mytool1");
	mytool2_print("hello mytool2");
	mytool1_add(a, b);
	mytool1_add(gtool1_a, gtool2_a);
	mytool1_add(gtool1_b, gtool2_b);
	mytool3_add(gtool1_b, gtool2_b);
	return 0;
}
