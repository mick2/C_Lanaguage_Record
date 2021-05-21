#include <stdio.h>

typedef struct
{
	char t:4;
	char k:4;
	unsigned short i:8;
	unsigned long m;
} A;

int main()
{
	printf("sizeof(A) = %d\n", sizeof(A));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("Hello world\n");
	return 0;
}

