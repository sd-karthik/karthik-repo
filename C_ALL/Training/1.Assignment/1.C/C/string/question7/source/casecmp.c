#include "header.h"

int casecmp(char *str1, char *str2)	//Function to compare
{
	while(*str1)
	{
		if(*str1==*str2) {
			*str1++;
			*str2++;
			}

		else if(*str1 > *str2) {
			return 1;
			}

		else {
			return -1;
			}
	}

	return 0;
}
