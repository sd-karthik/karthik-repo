/*program to implement cat command*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define SIZE 1024

int main (int argc , char *argv[])							//command line arguments 
{
	int fd , fd1;
	int no_bytes;
//	char buf[SIZE];
	int c;
	
	if(3 > argc) {
		printf("Wrong input\n");
		return 0;
	}


	if ((strcmp (argv[2] , ">") ) == 0) {						//comparing 2nd command line argument with ">"

			if (-1 == (fd = open (argv[1] , O_RDONLY))) {			//open the file in read mode
					perror ("file does not exit\n");
					exit (0);
			}
				
			if (-1 == (fd1 = open (argv[3] , O_CREAT | O_RDWR | O_TRUNC, 0666))) {	//open the file in write mode
									printf ("error\n");
									exit (0);
			}
				
			close (0);										//closing stdin 
			dup2 (fd , 0);									//making fd as stdin buffer
			close (1);										//closing stdout
			dup2 (fd1 , 1);									//making fd1 as stdout
				
			while (EOF != (c = getchar()))  				//reading from file1 
					putchar (c);							//writing into file2
	}
		
	else if ((strcmp (argv[2] , ">>")) == 0) {						//comparing 2nd command line argument with ">"
			if (-1 == (fd = open (argv[1] , O_RDONLY))) {			//open the file in read mode

					perror ("file is not opening\n");
					exit(0);
			}
			
			if(-1 == (fd1 = open (argv[3] , O_CREAT | O_RDWR |O_APPEND , 0666))) {	//open the file in write mode
						printf ("file2 ont be opened\n");
						exit (0);
			}

			close (0);									//closing stdin
			dup2 (fd , 0);								//making fd as stdin buffer
			close (1);									//closing stdout
			dup2 (fd1 , 1);								//making fd1 as stdout
			
			while (EOF != (c = getchar()))				//read from file1
					putchar(c);							//write into the file2
	}
			
	else if ((strcmp (argv[1] , ">")) == 0) {							//comparing 1st command line argument with ">"
			if (-1 == (fd = open (argv[2] , O_CREAT | O_RDWR | O_TRUNC, 0666))) {	//open the file in write mode
					perror ("file is not opening\n");
					exit (0);
			}
			
			close (1);
			dup2 (fd , 1);
			
			while (EOF != (c = getchar ()))					//read from standard input
					putchar (c);							//write into the file
	}
		
	else if ((strcmp (argv[1] , ">>")) == 0) {						//comparing 1st command line argument with ">"
			
			if (-1 == (fd = open (argv[2] , O_CREAT | O_RDWR |O_APPEND , 0666))) {  //open the file in write mode
					perror ("file is not opening\n");
					exit (0);
			}

			close (1);											//closing stdout
			dup2 (fd ,1);   									//making fd as stdout
			
			while (EOF != (c = getchar ()))						//read from stdin
						putchar (c);
	}

	return 0;
}
