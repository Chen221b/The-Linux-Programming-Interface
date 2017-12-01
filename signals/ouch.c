#include <signal.h>
#include "../INC/tlpi_hdr.h"

static void sigHandler(int sig)
{
	printf("%d ouch!\n", sig);
}

int main(int argc, char const *argv[])
{
	signal(SIGQUIT, sigHandler);
	for(int i = 0; ;i++)
	{
		sleep(3);
		printf("%d\n", i);
	}
	return 0;
}