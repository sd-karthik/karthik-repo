#include"header.h"

int str_len(char *str)// Function to calculate string length
{
	int i=0;
	while(str[i])
	{
		i++;
	}
	
	return i-1;
}

