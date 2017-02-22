#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
	int pipefd[2]; //declaration
	pid_t cpid;


	if (pipe(pipefd) == -1) {
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	cpid = fork();
	if (cpid == -1) {
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (cpid == 0) {  
	   dup2(pipefd[0], 0);	
		close(pipefd[1]);          

		execlp("wc","wc",NULL);	
		exit(EXIT_SUCCESS);

	} else {           
	   dup2(pipefd[1], 1);	
		close(pipefd[0]);          /* Close unused read end */

		execlp("ls","ls",NULL);	

		exit(EXIT_SUCCESS);
	}
	
	return 0;

}


