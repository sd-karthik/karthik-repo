// character to integer converter

#include"hedear.h"

int char_int(char *cval)
{

	int ival;
	
	if(*cval >= '9' && *cval <= '0')
	{
		ival = ival*10 + *cval - '0';
	}
	else
		printf("invalid\n");

	return ival;
} 
