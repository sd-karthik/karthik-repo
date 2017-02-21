#include"header1.h"

void str_cpy(char *sbuf, char *dbuf)
{
	while(*sbuf != '\0'){
		*dbuf++ = *sbuf++;		
	   	
	}
    *dbuf = '\0';
}
