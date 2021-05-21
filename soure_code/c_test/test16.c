#include <stdio.h>

typedef union
{
	long i;
	int k[5];
	char c;
} DATE;

struct data
{
	int cat;
	DATE cow;
	double dog;
} too;

int main()
{
	DATE max;
	printf("==> UDEBUG sizeof(double) %d\n", sizeof(double));
	printf("==> UDEBUG sizeof(int) %d\n", sizeof(int));
	printf("==> UDEBUG sizeof(struct data) %d\n", sizeof(struct data));
	printf("==> UDEBUG sizeof(max) %d\n", sizeof(max));
	printf("==> UDEBUG %d\n", sizeof(struct data) + sizeof(max));
	printf("Hello world\n");
	return 0;
}

