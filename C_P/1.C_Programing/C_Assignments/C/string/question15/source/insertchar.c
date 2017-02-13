#include "header.h"

char *insertchar(char *str, const char ch, int pos)
{
	int i;
	
	for(i = str_len(str)-1; i >= pos; i--)	{

		str[i+1] = str[i];
	}
		str[pos]= ch;
	return str;
}
