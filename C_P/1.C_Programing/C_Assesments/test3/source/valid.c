#include"header.h"

int valid(char *str)
{
	int i;

	if( NULL != *str)
	{
		for(i = 0; i < str_len(str)-2; i++)
		{
			if(((*str<'a')&&(*str>'z'))||((*str<'A')&&(*str>'z'))||(*str!=' '))
			{
				printf("Invalid input!!\n");
				exit(0);
			}
			*str++;
		}
	}
	else {
			printf("No input entered or NULL occured\n");
	}

	return 0;	
}	
