#include"header.h"

int str_len(char *str)
{
	int length = 0;
	
	while(*str++)
	{
		length++;
	}
	return length;
}
