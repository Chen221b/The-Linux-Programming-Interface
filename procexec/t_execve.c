#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char* pathname;
	char* argVec[10];
	char* envVec[3];
	if(argc < 2)
	{
		printf("Error\n");
		return 0;
	}
	pathname = strrchr(argv[1], '/');
	argVec[0] = pathname;
	argVec[1] = "Damon";
	argVec[2] = "Call";
	envVec[0] = "Qiu";
	envVec[1] = "221b";

	execve(argv[1], argVec, envVec);

	return 0;
}