# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <pthread.h>
# include <sys/types.h>
# include <sys/syscall.h>


void * thread_function(void * p)

{
		int seconds ;
		char message[64];

		if((sscanf(p, "%d %64[^\n]", & seconds, message ) < 2 )) {
				fprintf(stderr, "Bad commands\n");
		}else {
				sleep(seconds);
				printf("{%d} %s\n", seconds, message);
		}

		pthread_exit(NULL);
}

int main ()
{
		pthread_t th_id;

		int status;

		int * retval;
		
		int line [128];
		while(1) {

				printf("Alarm >");
				if(fgets(( char*)line, sizeof(line), stdin) == NULL)
						exit(0);

				if(strlen ((const char*)line) <= 1)
						continue;
				status = pthread_create(&th_id, NULL, thread_function, line);

				if(status != 0) {
						printf("Thread creation error : %s\n", strerror(status));
				}

		}

		pthread_exit(NULL);	
		return 0;
}
