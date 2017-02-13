/* Function to find length of string */

#include "header.h"

int str_len(char *f_str)
{
	int count;

	for (count = 0; *(f_str+count) ; count++) ;

	return (count - 1);
}
