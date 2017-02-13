#include"header.h"

void push(int val)
{
	if( top == (MAX-1) )
	{
		printf("only 1 space is left\n");
	}
	else if( top == MAX )
	{
		printf("stack is full\n");
		exit(0);
	}
	else {	
		top++;
		stack[ top ] = val;	

	}
}

