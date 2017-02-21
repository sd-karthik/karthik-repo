#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>

void *thread_fun(void *tp )
{
	printf("---------Inside Thread---------\n");
	printf("Thread PID = %d\n", getpid());
	printf("Thread PPID = %d\n", getppid());
	getchar();	
	printf("-------------------------------\n");
	return NULL;
}

int main()
{
	int status;
	pthread_t th_id;

	printf("-----------Inside Main-----------\n");
	printf("PPID = %d\n", getpid());
	printf("-------------------------------\n");
	status  = pthread_create(&th_id, NULL, thread_fun , NULL);
	if (status != 0)
	{
		printf("Thread creation failed\n: %s", strerror(status));
	}

	printf("-----------Inside Main-----------\n");
	printf("PPID = %d\n", getpid());
	printf("-------------------------------\n");
	return 0;
}
