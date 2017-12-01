#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <setjmp.h>
#include "test2.h"

static jmp_buf env;
extern int testExtern;

static void handler(int a)
{
	printf("%p\n", &a);
}

void notStaticHandler(int a)
{
	printf("%p\n", &a);
}

void testNotStatic(void (*handler)(int))
{
	(*handler)(4);
	longjmp(env, 1);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", testExtern);
	testFunction(handler);
	if(setjmp(env) == 0){
		printf("First\n");
		testNotStatic(notStaticHandler);
	}else{
		printf("Second\n");
	}
	printf("%p\n", &main);
	printf("%p\n", &testFunction);
	printf("%p\n", &handler);
	printf("%p\n", &testNotStatic);
	printf("%p\n", &notStaticHandler);
	return 0;
}