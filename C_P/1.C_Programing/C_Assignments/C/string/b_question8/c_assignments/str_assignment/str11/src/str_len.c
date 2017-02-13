#include "header1.h"

int str_len (char *str)
{
	int i=0;
	while(*str++ ){
	i++;
	}
	return (i-1);
}
