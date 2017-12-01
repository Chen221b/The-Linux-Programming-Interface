#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200

int main(int argc, char const *argv[])
{
	char str[MAX_LENGTH];
	char* returnstr;
	for(;;)
	{
		returnstr = fgets(str, MAX_LENGTH, stdin);
		system(str);
	}
	return 0;
}