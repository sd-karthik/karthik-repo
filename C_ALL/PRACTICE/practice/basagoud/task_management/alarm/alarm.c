#include <stdio.h>

#include "errors.h"

int main(int argc, char * argv[])
{
		int seconds;
		int status;
		char line[128];
		char message[64];
		pid_t pid;

		while(1) {

				printf("Alarm > ");
				
				if(fgets(line, sizeof(line), stdin) == NULL) 
						exit(0);
				
				if(strlen (line) <= 1)
						continue;

				pid = fork();
				if(pid > 0) {

					if(waitpid(-1, NULL, WNOHANG))  {
								perror("Waitpid error \n");
						}

					//	wait(NULL);
				} else if (pid == 0) {

						if(sscanf(line, "%d %64[^\n]", &seconds, message ) < 2 ) {
								fprintf(stderr, "\nBad commands\n");
						}else {
								sleep(seconds);
								printf("{%d} %s\n", seconds, message);
						}
				} else {
						printf("fork failed\n");
				}
				
		}
		return 0;
}
