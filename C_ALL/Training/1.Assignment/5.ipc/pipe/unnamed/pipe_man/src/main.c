/* Parent ot child communication using command-line
 * 
 * DOC : 05 / 02 / 2017
 *
 * AUTH: KARTHIK 
 *
 */ 

#include "header.h"

int main(int argc, char *argv[])
{
	int pipefd[2];
	pid_t cpid;
	char buf;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <string>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

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
		close(pipefd[1]);          /* Close unused write end */

		printf("\nCHILD CONTEX: READ OPERATION\nRead string:\n");
		while (read(pipefd[0], &buf, 1) > 0)
			write(STDOUT_FILENO, &buf, 1);

		write(STDOUT_FILENO, "\n", 1);
		close(pipefd[0]);
		exit(EXIT_SUCCESS);
	}
	
	else {            /* Parent writes argv[1] to pipe */
		close(pipefd[0]);          /* Close unused read end */

		printf("PARENT CONTEX: WRITE OPERATION\n"
				"Written string:\n %s\n", argv[1]);
		write(pipefd[1], argv[1], strlen(argv[1]));
		close(pipefd[1]);          /* Reader will see EOF */
		wait(NULL);                /* Wait for child */
		exit(EXIT_SUCCESS);
	}
}

