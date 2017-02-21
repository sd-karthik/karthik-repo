/* NAME : Parent and Child communication using Unnamed pipe
 * 
 * DOC : 04/02/2017
 *
 * AUTH : KARTHIK
 *
 */

#include "header.h"

int main(void)
{
	int pipefd[2];
	int fd;
	char ch;
	char buf[20];
	pid_t ch_pid;
	int i = 0;
//	char str[] = "GESL";


	if (pipe(pipefd) == -1)
	{
		perror(" Error in Pipe:");
		exit(EXIT_FAILURE);
	}

	if (-1 == (ch_pid = fork()))
	{
		perror("Error in fork:");		
		exit(EXIT_FAILURE);
	}
	
//	wait(NULL);
	
	/* Child reads from pipe */
	if (ch_pid == 0) {
		close(pipefd[1]);  /* Close unused write end */

		while (read(pipefd[0], &ch, 1) > 0)	
				printf("%c", ch);			
		close(pipefd[0]);
		exit(EXIT_SUCCESS);
	}
	else
	{
		/* Parent process closes up unused read side of pipe */
		close(pipefd[0]);

		/* Read in a string from the pipe */	
	while(1) {
			ch = getchar();
			if( ch != '\n' )	
				write(pipefd[1], &ch, 1);
			else
				break;
		}
		close(pipefd[1]);
		wait(NULL);
//		printf("Recieved string: %s", buf);
		exit(EXIT_SUCCESS);
	}

	return 0;
}
