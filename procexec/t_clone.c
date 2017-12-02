#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sched.h>
#include <fcntl.h>
#include <signal.h>

#define CHILD_SIG SIGUSR1

int childFunc(void* arg)
{
	printf("Damon\n");
	return 0;
}

int main(int argc, char const *argv[])
{
	const int STACK_SIZE = 65536;
	char* stack;
	char* stackTop;

	stack = malloc(STACK_SIZE);
	stackTop = stack + STACK_SIZE;
	clone(childFunc, stackTop, CHILD_SIG);
	printf("Wait\n");
	waitpid(-1, NULL, NULL);
	printf("Qiu221b\n");
	return 0;
}