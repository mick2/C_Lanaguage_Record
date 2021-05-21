#include <stdio.h>

int main()
{
	int arr[] = {99,123,145,156};
	int len = sizeof(arr) / sizeof(int);
	int i = 0;
	for (i =0; i < len; i++)
	{
		printf("%d", arr[i]);
	}

	printf("\n");
	return 0;
}

