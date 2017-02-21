#include "header.h"
int read_int()
{        
	char *ptr = NULL;
	int ivalue;
	double tempnum ;
	int  i, flag, k, l = 0;
	int valid;	
	do {
 		valid = 1; flag = 0; ivalue = 0; i = 0;  k = 0; tempnum = 0; l = 0;
		if ( NULL == (ptr = (char *)malloc(sizeof(char) * LEN))) {
			perror("Memory allocation for ptr failed\n");
			exit (1);
		}
		__fpurge(stdin);
		fgets(ptr, LEN, stdin);
		
		l = strlen(ptr);
		*(ptr + l - 1) = '\0';

		 while (*(ptr +i) == ' ' || *(ptr +i) == '\t') { 	/*Removing leading blanks,tabs*/
				i++;
				valid = 1;
			}

		for (k = strlen(ptr) - 1; k >= 0; k-- ) { 	/*Remove trailing blanks, tabs */
			if (*(ptr + k) != ' ' && *(ptr + k) != '\t')
			break;
			*(ptr + k) = '\0';
			valid = 1;
			}

		if (*(ptr + i) == '-' || *(ptr + i) == '+') {		 /*Checks the +ve and -ve number*/
						if(*(ptr + i) == '-')	
			 					flag = 1;
						i++;
				}

		if (!*(ptr + i))
			valid = 0;

		while (*(ptr + i)) {			/*converts to integer */
			 if (*(ptr + i) < '0' || *(ptr + i) > '9' ) { /*checks other than 0 to 9*/
				valid = 0;
				break;
				}
			else
				tempnum = tempnum * 10 + (*(ptr + i) - '0'); 
				i++;	
			}

		if (flag == 1)
			tempnum  = 0 - tempnum ;

		if (tempnum < INT_MIN || tempnum > INT_MAX) {
			printf("Entered number is out of range\n");
			valid = 0;			
			}
		else
			ivalue =(int)tempnum;

		if (valid == 0)
			printf("Enter valid input\n");
		} while (valid == 0);
	FREE(ptr);
	return ivalue;
}
