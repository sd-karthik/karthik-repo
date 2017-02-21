/* To verify that the threads share common data
* local variable for -> l_val
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<unistd.h>
#include<signal.h>

void *thread_fun(void *tp )
{
	int *ptr = (int *) tp;
	int val = 5;

	printf("------------ Inside Thread ---------------\n");
	*ptr = 20;
	printf("tgid= %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("l_val = %d\t&l_val = %x\n", *ptr, ptr);
	printf("val = %d\t&val = %x\n", val, &val);
	printf("------------------------------------------\n");
	getchar();	
	return NULL;
}

/* Main function which creates threads*/
int main()
{	
	int l_val = 2;
	int status;
	pthread_t th_id;


	printf("------------ Inside Main -----------------\n");
	printf("Before:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("l_val = %d\t&l_val = %x\n", l_val, &l_val);
	printf("------------------------------------------\n");

	/* New Thread creation */
	status  = pthread_create(&th_id, NULL, thread_fun , &l_val);
	if (status != 0)
	{
		printf("Thread creation failed\n: %d", strerror(status));
	}

	getchar();	

	printf("------------ Inside Main -----------------\n");
	printf("after:\ntgid = %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
	printf("l_val = %d\t&l_val = %x\n", l_val, &l_val);
	printf("------------------------------------------\n");

	/* The New thread is terminated */
	pthread_exit (NULL);

	return 0;
}
