#include <stdio.h>
#define IMAGE_BOOT                      (1<<0)
#define IMAGE_OS                        (1<<1)
#define IMAGE_CRAMFS                    (1<<2)
#define IMAGE_POE                       (1<<3)

int main()
{
	printf("==> UDBEG IMAGE_BOOT = %d\n", IMAGE_BOOT);
	printf("==> UDBEG IMAGE_OS = %d\n", IMAGE_OS);
	printf("==> UDBEG IMAGE_CRAMFS = %d\n", IMAGE_CRAMFS);
	printf("==> UDBEG IMAGE_POE = %d\n", IMAGE_POE);
	printf("Hello world\n");
	return 0;
}

