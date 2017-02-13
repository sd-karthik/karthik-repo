#include "header.h"

int str_len(char *str)
{
	int count;

	for(count = 0; *str; *str++, count++);
	return (count-1);
}
