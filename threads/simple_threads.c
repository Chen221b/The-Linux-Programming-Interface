#include <pthread.h>
#include <stdio.h>
#include <string.h>

void* threadFunc(void* arg)
{
	char *s = (char*)arg;
	printf("%s\n", s);
	return (void*)strlen(s);
}

int main(int argc, char const *argv[])
{
	pthread_t t1;
	void* res;
	int s;

	pthread_create(&t1, NULL, threadFunc, "Damon\n");
	pthread_join(t1, &res);
	printf("Thread return %d\n", (int)res);
	return 0;
}