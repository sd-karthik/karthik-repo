#include<stdio.h>
#include<sys/types.h>
#include<string.h>

#if ex1
//DOC: 20/1/17
//Printing parent and child process
int main()
{
	int pid = 4;

	printf("before fork PPID = %d\n", getpid());

	pid = fork();
	printf("after fork PPID= %d\n", getpid());
	getchar();

	printf("PID = %d\n",pid);

	return 0;
}
#endif

#if ex2
//DOC: 20/1/17
//Printing parent and child process with process states
//With Zombie process
int main()
{
	int pid;

	printf("before fork PPID = %d\n", getpid());

	pid = fork();
//	wait();
	getchar();
	printf("after fork PPID= %d\n", getpid());
	getchar();
	printf("PID = %d\n",pid);

	return 0;
}
#endif

#if ex3
//DOC: 20/1/17
//Printing child and parent with wait()
//Without Zombie
int main()
{
	int pid;
	int i = 0;

	printf("before fork PPID(%d) = %d\n", i++, getpid());

	pid = fork();

	printf("PID(%d) = %d", i++, getpid());


	wait();

	getchar();

	printf("after fork PPID= %d\n", getpid());

	getchar();

	printf("PID = %d\n",pid);

	return 0;
}
#endif
#if ex4
//DOC: 20/1/17
//Printing parent and child process with process states
//With Zombie process and execute shell command
#define SCRIPT "\
#/bin/bash \n\
echo \"hello\" \n\
echo \"how are you\" \n\
echo \"today\" \n\" 
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
	puts(SCRIPT);
	return 0;
}
#endif
