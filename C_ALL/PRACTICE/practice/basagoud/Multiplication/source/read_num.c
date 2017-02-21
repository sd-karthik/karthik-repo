/*
 * read integer number 
 */
#include "header.h"

char *read_number()
{
	char *number = NULL;
	
	/*allocating memory for number1 and number2*/
	if ( NULL == (number = (char *)malloc(sizeof(char) * DEGIT_LENGTH))) {
		perror("malloc");
		exit (1);
	}
	/*reading first number */
	__fpurge(stdin);
	fgets(number, DEGIT_LENGTH, stdin);
	*(number + strlen(number) - 1) = '\0';
	
	return number;

}
