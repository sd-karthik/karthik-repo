/* To verify that the threads share common data
* heap variable for -> h_val
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<unistd.h>
#include<signal.h>

/* Thread function which changes the value of  h_val*/
void *thread_fun(void *tp )
{
	int *ptr = (int *) tp;

	printf("------------ Inside Thread ---------------\n");
	*ptr = 20;
	printf("tgid= %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("h_val = %d\t&h_val = %x\n", *ptr, ptr);
	printf("------------------------------------------\n");
	getchar();	
	return NULL;
}

/* Main function which creates threads*/
int main()
{	
	int *h_val = NULL;
	int status;
	pthread_t th_id;

	h_val = (int *) malloc(sizeof(int));
	*h_val = 3;

	printf("------------ Inside Main -----------------\n");
	printf("Before:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("h_val = %d\t&h_val = %x\n", h_val, &h_val);
	printf("------------------------------------------\n");

	/* New Thread creation */
	status  = pthread_create(&th_id, NULL, thread_fun , h_val);
	if (status != 0)
	{
		printf("Thread creation failed\n: %d", strerror(status));
	}

	getchar();	

	printf("------------ Inside Main -----------------\n");
	printf("after:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("h_val = %d\t&h_val = %x\n", h_val, &h_val);
	printf("------------------------------------------\n");

	/* The New thread is terminated */
	pthread_exit (NULL);

	return 0;
}

