#include"header.h"

void Utol(char *str)
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
