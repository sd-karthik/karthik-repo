/* Asynchronous alarm using group thread leader */

#include "errors.h"

int th_alarm(int *id)
{
	unsigned int pid;
	char line[128];
	char message[64];
	time_t now;

	now = time(NULL);
 
	while(1){
		printf("ALARM: ");
		if(fgets(line,sizeof(line),stdin) == NULL) exit(0);
		if(strlen(line) <= 1) continue;

		if(sscanf(line,"%d  %64[^\n]",&seconds,message)<2)
		{
			fprintf(stderr,"Bad command\n");
		}
		else{
			pid = fork();
			if(pid > 0) {
				signal(SIGCHLD,SIG_IGN);	
			}
			else if(pid == 0) {
				sleep(seconds);
				printf("%s \t (%d) %s  child \n",ctime(&now),seconds,message);
				exit(0);
	}
}
	
int main(int argc , char *argv[])
{
	unsigned int seconds;
	int status;
	int p;
	pthread_t pth;
	
	p = pthread_create(&pth
		
			}
		}

	}
} 

