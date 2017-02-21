#include "header1.h"


char *squeeze(char *str1)
{	
	int i=0;
	int l;
	int j=0;
	char t;
	l = str_len(str1);
	while(*(str1+i) !='\0')
	{
	while ((*(str1+i) == *(str1+i+1)) && *(str1+i) !='\0')
		{
	     i++;								
		}
	*(str1+j) = *(str1+i);
	j++;
	i++;
	}
	*(str1+j) = '\0';                                          
	return str1;                                               
}    
