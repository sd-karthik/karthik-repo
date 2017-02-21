#include "header.h"

void str_ncpy(char *sbuf, char *dbuf, int n)
{
	int i;	
	for( i = 0; i < n; i++) {
		*dbuf++ = *sbuf++;
	}
	*dbuf='\0';
}
