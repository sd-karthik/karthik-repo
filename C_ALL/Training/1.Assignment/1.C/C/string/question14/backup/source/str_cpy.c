#include "header.h"

void str_cpy(char *dbuf, char *sbuf)
{
	while(*dbuf++=*sbuf++);
}				
