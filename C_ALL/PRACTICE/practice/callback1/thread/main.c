#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
void thrd_func(void *ptr)
{
	printf("in thread func\n");
	
//	return 0;
}

int main()
{
	pthread_t thid;

	printf("in main\n");

	pthread_create(&thid, NULL, thrd_func, 0);

//	sleep(1);
//	pthread_exit(NULL);
}

