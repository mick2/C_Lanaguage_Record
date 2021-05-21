#include <stdio.h>

#define PROGRAM_NAME "test3"

/* Error messages */
#define errmsg(fmt, ...)  ({                                                \
  fprintf(stderr, "%s: error!: " fmt "\n", PROGRAM_NAME, ##__VA_ARGS__); \
  -1;                                                                 \
})

int main()
{
	char *s = "hello linux";
	printf("Hello world\n");
	errmsg("contents of \"%s\" is too long", s);
	return 0;
}

