/* To verify that the threads share common data
* global variable for -> g_val
* local variable for -> l_val
* heap variable for -> h_val
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<unistd.h>
#include<signal.h>


/* global value */
int g_val = 1; 

/* Thread function which changes the value of g_val, l_val, h_val*/
void *thread_fun(void *tp )
{
//	int *ptr = (int *) tp;

	printf("------------ Inside Thread ---------------\n");
	g_val = 10;
	printf("tgid= %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("g_val = %d\t&g_val = %x\n",	g_val, &g_val);
	printf("------------------------------------------\n");
	getchar();	
	return NULL;
}
int main()
{	
	int status;
	pthread_t th_id;

	printf("------------ Inside Main -----------------\n");
	printf("Before:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("g_val = %d\t&g_val = %x\n", g_val, &g_val);
	printf("------------------------------------------\n");

	/* New Thread creation */
	status  = pthread_create(&th_id, NULL, thread_fun , g_val);
	if (status != 0)
	{
		printf("Thread creation failed\n: %d", strerror(status));
	}

	getchar();	

	printf("------------ Inside Main -----------------\n");
	printf("after:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("g_val = %d\t&g_val = %x\n", g_val, &g_val);
	printf("------------------------------------------\n");

	/* The New thread is terminated */
	pthread_exit (NULL);

	return 0;
}
