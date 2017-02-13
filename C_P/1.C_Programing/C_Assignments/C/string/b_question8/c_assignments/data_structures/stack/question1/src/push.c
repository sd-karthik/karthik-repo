#include "header1.h"
 
void push(int element)
{	
	if (top >= limit)
		printf("stack is full \n");
	else{
		stack[top] = element;
		top++;
	}
}
