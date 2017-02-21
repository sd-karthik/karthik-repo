#include"header.h"

char str_cmp(char *str1, char *str2)
{
	while(*str1 && *str2) {
		if(*str1 == *str2){
			str1++;
			str2++;
			}		
//	(*str1==*str2)? *str1++,*str2++ : ((*str1 > *str2)? return 1: return (-1));			
		else if(*str1 > *str2)
			{
					return 1;
			}

		else {
					return -1;
			}
		}

	return 0;
}
