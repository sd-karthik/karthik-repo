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

#if ex1
/* Values are changed in the Thread */

/* global value */
int g_val = 1; 

/* Thread function which changes the value of g_val, l_val, h_val*/
void *thread_fun(void *tp )
{
	printf("------------ Inside Thread ---------------\n");
	g_val = 10;
	l_val = 20;
	h_val = 30;

	printf("tgid= %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("g_val = %d\t&g_val = %x\n"
			"l_val = %d\t&l_val = %x\n"
			"h_val = %d\t&h_val = %x\n", g_val, &g_val, l_val, &l_val,\				 *h_val, h_val);
	printf("------------------------------------------\n");
	getchar();	
	return NULL;
}

/* Main function which creates threads*/
int main()
{
	int l_val = 2;
	int *h_val = NULL;
	int status;
	pthread_t th_id;

	h_val = (int *) malloc(4);
	*h_val = 3;

	printf("------------ Inside Main -----------------\n");
	printf("Before:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("g_val = %d\tl_val = %d\th_val = %d\n", g_val, l_val, *h_val);
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
	printf("g_val = %d\tl_val = %d\th_val = %d\n", g_val, l_val, *h_val);
	printf("------------------------------------------\n");
/* The New thread is terminated */
	pthread_exit (NULL);

	return 0;
}
#endif

#if ex2
#endif
