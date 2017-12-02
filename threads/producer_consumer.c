#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int avail = 0;
pthread_mutex_t mux = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

void* pordFunc(void* arg)
{
	char* thread_ID = (char*)arg;
	printf("Create %s\n", thread_ID);
	while(1)
	{
		pthread_mutex_lock(&mux);
		avail++;
		printf("%s get mux, avail = %d\n", thread_ID, avail);
		pthread_mutex_unlock(&mux);
		printf("%s release mux and send a signal.\n", thread_ID);
		pthread_cond_signal(&cond);
		sleep(1);
	}
	return 0;
}

void* consFunc(void* arg)
{
	char* thread_ID = (char*)arg;
	printf("Create %s\n", thread_ID);
	while(1)
	{
		pthread_mutex_lock(&mux);
		while(avail < 5)
		{
			printf("%s wait, avail = %d\n", thread_ID, avail);
			pthread_cond_wait(&cond, &mux);
		}
		printf("%s consumes avail %d\n",thread_ID, avail);
		avail = 0;
		pthread_mutex_unlock(&mux);
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	pthread_t producer, consumer1, consumer2;
	char* proID = "Producer";
	char* con1ID = "Consumer1";
	char* con2ID = "Consumer2";

	printf("Damon\n");

	if(pthread_create(&producer, NULL, pordFunc, proID) != 0)
		printf("Error\n");
	if(pthread_create(&consumer1, NULL, consFunc, con1ID) != 0)
		printf("Error\n");
	if(pthread_create(&consumer2, NULL, consFunc, con2ID) != 0)
		printf("Error\n");

	while(1){}

	return 0;
}