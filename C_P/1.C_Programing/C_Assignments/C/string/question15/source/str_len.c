#include "header.h"

int str_len(char *str)
{
	int i;

	for(i = 0; *str; *str++, i++);
	return i;
}

