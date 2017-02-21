/*
 * 
 */

#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>
#include<unistd.h>
#define _GNU_SOURCE

#if exb
/* Process creating a thread
 * getpid gives tgid and syscall(SYS_gettid) gives pid
 */

void *fun(void *p)
{
	printf("---------- Inside thread ------------\n");	
	printf("PID: %ld tgid:%d\n",syscall(SYS_gettid),getpid());
	printf("-------------------------------------\n");
	//getchar();
	return NULL; 
}

int main()
{
	pthread_t *thread;
	pthread_create(thread,NULL,fun,NULL);
	printf("----------- Inside main --------------\n");
	printf("PID: %ld tgid:%d\n",syscall(SYS_gettid),getpid());
	printf("--------------------------------------\n");
	getchar();
	pthread_exit(NULL);
	return 0;
}
#endif

#if exc
/* Thread creating a process */

void *fun(void *p)
{
	int pid;
	
	pid = fork();
	wait();
	
	if(pid > 0) {
		printf("------------- Inside thread ------------\n");
		printf("PID: %ld tgid:%d\n",syscall(SYS_gettid),getpid());
		printf("--------------------------------------\n");
		getchar();
	}
	else if( pid == 0)
	{
		printf("------------- Inside thread ------------\n");
		printf("PID: %ld tgid:%d\n",syscall(SYS_gettid),getpid());
		printf("--------------------------------------\n");
		getchar();
	}
	return; 
}

int main()
{
	pthread_t *thread;
	pthread_create(thread,NULL,fun,NULL);
	printf("------------- Inside main ------------\n");	
	printf("PID: %ld tgid:%d\n",syscall(SYS_gettid),getpid());
	getchar();
	printf("--------------------------------------\n");
	pthread_exit(NULL);
}
#endif

#if exd
/* Thread creating a thread */

void *fun1(void *q)
{
	printf("----------- Inside thread 2 ----------\n");
	printf("PID : %ld tgid:%d\n",syscall(SYS_gettid),getpid());
	printf("--------------------------------------\n");
//	getchar();
	return NULL; 
}
void *fun(void *p)
{
	pthread_t thread1;
	pthread_create(&thread1,NULL,fun1,NULL);
	printf("----------- Inside thread 1 ----------\n");
	printf("PID : %ld tgid:%d\n",syscall(SYS_gettid),getpid());
	//getchar();
	printf("--------------------------------------\n");
	pthread_exit(NULL);
	return NULL; 
}

int main()
{
	pthread_t thread;

	pthread_create(&thread, NULL, fun, NULL);

	printf("------------ Inside Main -------------\n");
	printf("PID : %ld tgid:%d\n",syscall(SYS_gettid),getpid());
	getchar();
	printf("--------------------------------------\n");

	pthread_exit(NULL);
	return 0;
}
#endif
