/*
 * header file 
 */
#ifndef header
#define header 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define FREE(s) free(s) ;\
			s = NULL;
#define DEGIT_LENGTH 258

#if 1
/*
 * define structure for sign bit and validating number
 */
struct flag_bits {
	unsigned char sign  : 1;	/*to check sign */
	unsigned char valid : 1;	/*to validate number*/
	unsigned char choice: 3;	/*read choice*/
};
#endif

void multiplication();
char *read_number();
char number_validation(char *number);

#endif
