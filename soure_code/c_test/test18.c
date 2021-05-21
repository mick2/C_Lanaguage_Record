#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getmemory(char *p)
{
	printf("==> UDEBUG p = %p\n", p);
	p = (char *)malloc(100);
	printf("==> UDEBUG p = %p\n", p);
	strcpy(p, "hello world");
}

int main()
{
	char *str = NULL;
	printf("==> UDEBUG str = %p\n", str);
	getmemory(str);
	printf("%s\n", str);
	free(str);
	printf("Hello world\n");
	return 0;
}

