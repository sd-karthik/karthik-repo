# include <stdio.h>
# include  <unistd.h>

int main()
{
	pid_t pid;

	pid = fork();

	if(pid > 0) {
			printf("Parent process pid ==> %d\n", getpid());

	} else if(pid == 0){

			printf("child process pid ==> %d\n", getpid());

	} else {
			perror("fork failed\n");
	}
	getchar();	
	return 0;
}
