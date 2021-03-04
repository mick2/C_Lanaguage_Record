#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

void sigroutine(int signo)
{
	switch (signo)
	{
		case 2:
			printf("test signal had send!\n");
		break;
		default:
			printf("other signal had send!\n");
		break;
	}
}

int main()
{
	int sig = getpid();
	printf("process is %d\n", sig);
	signal(SIGHUP, sigroutine);
	signal(SIGINT, sigroutine);
	printf("Hello world\n");
	return 0;
}

