#include"header.h"

int str_cmp(char *str1, char *str2, int n)
{
	int flag=0;
	int i;

	for(i = 0; i < n; i++) {
		if(*str1 == *str2)
			{
				flag=1;
			}
		else
			{
				flag=0;
				return 0;
			}
	}
	return flag;
}

