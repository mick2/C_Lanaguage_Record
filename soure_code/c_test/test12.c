#include <stdio.h>


void test()
{
	if (printf("hello world\n"))
	{
		printf("==> UDEBUG %s[%d]\n", __FUNCTION__, __LINE__);
	}
}

int main()
{
	int a = 10;
	*&a = 20;
	printf("==> UDEBUG a = %d\n", a);
	test();
	return 0;
}

