#include <stdio.h>

int testExtern;

int testFunction(void (*handler)(int))
{
	(*handler)(5);
	return 0;
}

