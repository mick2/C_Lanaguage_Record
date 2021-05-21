#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *buf_dest;
	char *src = "hello world";
	long long bytes = strlen(src);
	buf_dest = malloc(2 * sizeof(char));

	printf("==> bytes = %lld\n", bytes);
	printf("==> src = %s\n", src);

	while(bytes)
	{
		int to_copy = 2;
		if (to_copy > bytes)
			to_copy = bytes;

		strncpy(buf_dest, src, to_copy);
		printf("==> UDEBUG buf_dest = %s\n", buf_dest);

		bytes -= to_copy;
		src = src + to_copy;
	}

	free(buf_dest);
	return 0;
}

