#include "header.h"

int squeeze(char *str1, char *str2)
{
	int len;
	int i;
	int j;
	
	len = str_len(str1);

	for(i=0, j=0; i < len; j++, i++)
	{
		for(; (str1[i] == str1[i+1]) && str1[i+1]; i++);
			
		str2[j]=str1[i];
	}
	
	str2[j] = '\0';
	return 0;
}
