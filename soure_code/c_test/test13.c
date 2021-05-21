#include <stdio.h>

void fun()
{
	static int x;
	printf("%d\n", x);
	x = x + 1;
	printf("%d\n", x);
}

int main()
{
	fun();
	fun();
	return 0;
}

