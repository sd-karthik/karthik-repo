# include "header.h"

int mystrlen(char * number) 
{
		short int len;
		for(len = 0; *(number++) != '\0'; len++);
		return len;
}
