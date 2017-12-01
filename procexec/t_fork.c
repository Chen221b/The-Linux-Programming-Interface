#include <sys/wait.h>
#include <signal.h>
#include "../INC/tlpi_hdr.h"

#define SYNC_SIG SIGUSR1

static int staticData = 111;

int main(int argc, char const *argv[])
{
	int data = 222;
	pid_t childPid;

	switch(childPid = fork()){
		case -1:
			errExit("fork");
		case 0:
			sleep(2);
			staticData = 333;
			data = 444;
			printf("%d\n", getppid());
			printf("%d\n", SYNC_SIG);
			break;
		default:
			childPid = wait(NULL);
			printf("%d\n", childPid);
			// sleep(2);
			break;
	}
	//printf("%d %d %d\n", childPid, staticData, data);
	return 0;
}