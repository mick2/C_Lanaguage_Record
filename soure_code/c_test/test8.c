#include <stdio.h>

#define CM_AES_ENCRYPT_PLAIN_KEY "bellwether"

int main()
{
	unsigned char plainKey[] = CM_AES_ENCRYPT_PLAIN_KEY;
	printf("==> UDEBUG plainKey = %s\n", plainKey);
	return 0;
}

