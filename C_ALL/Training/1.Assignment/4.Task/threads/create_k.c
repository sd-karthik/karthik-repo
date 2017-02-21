/* To verify that the threads share common data
* global variable data sharing for -> val
*/

#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<unistd.h>
#include<signal.h>

/* global value */
int val = 1; 

/* Thread function which changes the value of val*/
void *thread_fun(void *tp )
{
	printf("------------ Inside Thread ---------------\n");
	val = 10;

	printf("tgid= %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("val = %d\n", val);
	printf("------------------------------------------\n");
	getchar();	
	return NULL;
}

/* Main function which creates threads*/
int main()
{
	int status;
	pthread_t th_id;

	printf("------------ Inside Main -----------------\n");
	printf("Before:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("val = %d\n", val);
	printf("------------------------------------------\n");

/* New Thread creation */
	status  = pthread_create(&th_id, NULL, thread_fun , NULL);
	if (status != 0)
	{
		printf("Thread creation failed\n: %d", strerror(status));
	}

	getchar();	

	printf("------------ Inside Main -----------------\n");
	printf("after:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("val = %d\n", val);
	printf("------------------------------------------\n");
/* The New thread is terminated */
	pthread_exit (NULL);

	return 0;
}
