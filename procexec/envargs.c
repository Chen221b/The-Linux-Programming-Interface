#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char const *argv[])
{
	int j;
	char **ep;
	for(j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	for(ep = environ; *ep != NULL; ep++)
		printf("%s\n", *ep);
	return 0;
}