#include <stdio.h>

int binary_search(int *arr, int key, int arrlen)
{
	int low = 0;
	int high = arrlen - 1;
	int mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] > key)
		{
			high = mid - 1;
		}
		else if (arr[mid] < key)
		{
			low = mid + 1;
		}
		else
			return mid;
	}

	return -1;
}

int main()
{
	/* int arr[] = {1, 2, 3, 4, 5, 6}; */
	int arr[] = {6, 5, 4, 3, 2, 1};
	int key = 5;
	int arrlen = 6;
	int loc = binary_search(arr, key, arrlen);
	printf("==> UDEBUG loc = %d\n", loc);
	printf("Hello world\n");
	return 0;
}

