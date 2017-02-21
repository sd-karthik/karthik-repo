# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>

int 
	main (int argc, char * argv[])
{
		FILE *fd ;
		char buff[100];
		char * temp = NULL ;
		char *ptr = NULL;
	
		
		printf("Enter the command\n");
		fgets(buff, 100, stdin);
		*(buff + strlen (buff)-1) = '>';

		strcpy(buff + strlen(buff) , "pipe");
		
		popen(buff, "w");
	
		wait(NULL);
		fd = fopen("pipe", "r");

		ptr = (char*)malloc(100);

		if(argc >= 2) {
				while( NULL != (fgets(ptr, 100, fd))) {
						temp = ptr;
						if(NULL != (strstr(temp, argv[1]))) {
								printf("%s", ptr);
						}
				}
		} else {
				while(NULL != (fgets(ptr, 100, fd))) {
						printf("%s", ptr);
				}
		}

		fclose(fd);
		unlink("pipe");
		return 0;
}
