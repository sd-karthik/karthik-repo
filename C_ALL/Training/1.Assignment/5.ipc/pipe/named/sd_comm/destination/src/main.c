/*
 * NAME	: "Destination" application
 *
 * DOC	: 06 / 02 / 2017
 *
 * AUTH	: KARTHIK
 *
 * Functions : Source and Destination application communication : mkfifo
 * 
 * Description:	-> Open the file in write mode
 * 				-> mkfifo
 *				-> write into the file
 *				-> unlink , exit
 */

#include "header.h"

#define N_MAX 100	/* Max Value */

int main(int argc, char *argv[])
{
	int fd;
	char *buf = NULL;	//buffer

	if(NULL == (buf = (char *) malloc (sizeof(char *) * N_MAX)))
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	printf("Destination:\n");
	
	while(1) {
		/* open the file in read only mode */
		if((fd = open("../../sd_file.txt", O_RDONLY)) == -1)	
		{
			perror("open");
			exit(EXIT_FAILURE);
		}

	/* read the content into the buffer */ 
	read(fd, buf, 100);
	printf(" %s", buf);
	
	}
	close(fd);	// close the session
	free(buf);	//free the buffer
	return 0;	
}
