/* DOC : 27/01/17 

* To create a thread and print pid, tgid in repective context

*/

#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<unistd.h>
#include<signal.h>

/* Thread function which has separate pid(lwpid) but same tgid */
void *thread_fun(void *tp )
{
	printf("------------ Inside Thread ---------------\n");

	printf("tgid= %d\t pid = %ld\n", getpid(), syscall(SYS_gettid));
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
	printf("------------------------------------------\n");

/* New Thread creation */
	status  = pthread_create(&th_id, NULL, thread_fun , NULL);
	if (status != 0)
	{
		printf("Thread creation failed\n: %d", strerror(status));
	}

	getchar();	

/* The New thread is terminated */
	pthread_exit (NULL);

	return 0;
}
