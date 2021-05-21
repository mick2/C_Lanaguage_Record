#include <stdio.h>
#include <string.h>

int main()
{
	unsigned long rc = 0x10000 - sizeof(unsigned long);
	printf("==> UDEBUG rc = %ld\n", rc);
	printf("==> UDEBUG sizeof(unsigned long) = %u\n", sizeof(unsigned long));

	return 0;
}

