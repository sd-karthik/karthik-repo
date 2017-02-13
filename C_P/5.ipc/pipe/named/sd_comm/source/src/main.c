/*
 * NAME	: "Source" application
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

#define N_MAX 100

int main(int argc, char *argv[])
{
	int fd;
	char *buf = NULL;

    if(NULL == (buf = (char *) malloc (sizeof(char *) * N_MAX)))
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

	if ((mkfifo("../../sd_file.txt", 0666)) == -1)
	{
		perror("mkfifo");
		exit(EXIT_FAILURE);
	}

	printf("Enter a string into the file sd_file.txt\n");

	if((fd = open("../../sd_file.txt", O_WRONLY)) == -1)	
	{
		perror("open");
		exit(EXIT_FAILURE);
	}

	while(1) {
		if(NULL == (fgets(buf, N_MAX, stdin)))
		{
			perror("fgets");
			exit(EXIT_FAILURE);
		}
	
		write(fd, buf, 100);

	}
		close(fd);
		unlink("../../sd_file.txt");
		free(buf);
	return 0;
}
