#include"header.h"

void Utol(char *str)// Function to convert from Uppercase to lower case
{
	while(*str)
	{
		if((*str >= 65) && (*str <= 90))
			{
				*str+=32;
				*str++;
			}
		else {
			*str++;
			}
	}
}

