#include"header.h"

int valid(char *str)	//Function to validate
{
	int i = 0;
	
	while(str[i])
	{
		if((str[i] >= 'a') && (str[i] <= 'z'))
			{
				i++;
			}
		else
			{
				printf("Invalid input\n");
				exit(0);
			}
	}
	return 0;
}

