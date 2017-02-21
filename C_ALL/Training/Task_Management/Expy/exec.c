#include <stdio.h>
#include <unistd.h>

int main(void)
{ 
	int pid;

	printf("hello 1\n");
	
	if(!fork())
	{
		printf("child PID : %d\n", getpid());
		execl("/bin/sh", "karthik", NULL);
	}
	wait();
	return 0; 
}
