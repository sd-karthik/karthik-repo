#include "header1.h"


char *reverse(char *str1)
{	
	int i=0;
	int l;
	char t;
	l = str_len(str1);
	while(l/2)
	{
	t = *(str1+i);
	*(str1+i) = *(str1+(l-1));
	*(str1+l-1)=t;
	i++;
	l--;
	}                                          
	return str1;                                               
}    
