/*
 * Number validation
 */
#include "header.h"

char number_validation(char *number)
{
	short int index = 0;
#if 1
	/*validates between digit sign*/
	if ( number[index] == '+' || number[index] == '-')  
		index++;
	for (; number[index] != '\0'; index++) {
		if (number[index] < '0' || number[index] > '9') {
			printf ("Invalid number\n");
			FREE(number);
			return 0;	/*to set valid bit*/
		}
	}
#endif
	return 1 ;
}
