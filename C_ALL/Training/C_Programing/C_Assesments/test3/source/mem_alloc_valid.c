#include"header.h"

void mem_alloc_valid(char *str)
{
	str =(char *) malloc(sizeof(char) * MAX);

	if( NULL == *str)
	{
		printf("Memory is not allocated\n");
	}
}

