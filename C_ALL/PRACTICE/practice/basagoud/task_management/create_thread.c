 # include <stdio.h>
 # include <pthread.h>
 # include <sys/types.h>
 # include <sys/syscall.h>
void * thread_function(void * p)
{
		printf("In child thread\n");

		getchar();
		return NULL;
}

int main()
{
		pthread_t th_id;

		int status;

		status = pthread_create(&th_id, NULL, thread_function, NULL);

		if(status != 0) {
				printf("Thread creation failed\n");
		}
		printf("PID ==> %d\n", syscall(SYS_gettid));
		printf("TID ==> %d\n", getpid());
		printf("PPID ==> %d\n", getppid());

		 
		getchar();
		pthread_exit(NULL);
		return 0;
}
