#include<stdio.h>
#include<sys/types.h>

#if ex1
int main()
{
	int pid;

	printf("before fork PPID = %d\n", getpid());

	pid = fork();
	getchar();
	printf("after fork PPID= %d\n", getpid());
//	printf("PID = %d\n",pid);

	return 0;
}
#endif

#if ex2
int main()
{
	int pid;

	printf("before fork PPID = %d\n", getpid());

	pid = fork();
	wait();
	getchar();
	printf("after fork PPID= %d\n", getpid());
	getchar();
	printf("PID = %d\n",pid);

	return 0;
}
#endif

