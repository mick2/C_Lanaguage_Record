#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Running ps with system\n");
	system("ps au");
	printf("ps Done\n");
	return 0;
}

