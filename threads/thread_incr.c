#include <stdio.h>
#include <pthread.h>
#include <stddef.h>

int glob = 0;
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER; //0

void* threadFunc(void* arg)
{
	int loops = *((int*)arg);
	int loc, j;
	pthread_t selfID;
	selfID = pthread_self();
	for(j = 0; j < loops; j++)
	{
		pthread_mutex_lock(&mtx);
		loc = glob;
		loc++;
		glob = loc;
		pthread_mutex_unlock(&mtx);
	}
	//printf("%d\n", selfID);
	return (void*)selfID;
}

int* testFunc()
{
	int a = 100;
	printf("%X\n", &a);
	return (int*)a;
}

char* testFunc1()
{
	char* a = "Damon";
	return a;
}

int main(int argc, char const *argv[])
{
	pthread_t t1, t2;
	int loops = 10000000;
	void* res;

	pthread_create(&t1, NULL, threadFunc, &loops);
	pthread_create(&t2, NULL, threadFunc, &loops);
	pthread_join(t1, &res);
	printf("%d\n", (int)res);
	pthread_join(t2, &res);
	printf("%d\n", (int)res);
	printf("%d\n", glob);

	// int* rece = testFunc();
	// printf("%d\n", (int)rece);
	// printf("%d\n", sizeof(void*));

	// char a[10];
	// char* b;

	// b = testFunc1();
	// printf("%s\n", a);

	// printf("%d\n", mtx);

	return 0;
}