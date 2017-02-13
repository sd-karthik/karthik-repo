/* ls | wc implementation*/

#include "header.h"

int main(int argc, char *argv[])
{
	int pipefd[2];
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

	if (cpid == 0) {    /* Child reads from pipe */
//		close(pipefd[1]);          /* Close unused write end */
		dup2(pipefd[0], 0);			/* writing into stdin */
		close(pipefd[1]);
		execlp("wc", "wc", NULL);
	}
	else {            /* Parent writes argv[1] to pipe */
//		close(pipefd[0]);          /* Close unused read end */
		dup2(pipefd[1], 1);			/* reading into stdout */
		close(pipefd[0]);          /* Reader will see EOF */
		execlp("ls", "ls", NULL);
		exit(EXIT_SUCCESS);		
	}

	return 0;
}
