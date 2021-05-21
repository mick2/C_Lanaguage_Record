#include <stdio.h>

int main()
{
	char str[] = "Hello";
	char *p = str;
	int n = 10;

	printf("sizeof(str) = %d\n", sizeof(str));
	printf("sizeof(p) = %d\n", sizeof(p));
	printf("sizeof(n) = %d\n", sizeof(n));
	return 0;
}

