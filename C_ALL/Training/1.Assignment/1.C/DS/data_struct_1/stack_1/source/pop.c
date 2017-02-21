#include"header.h"

int pop(void)
{
	int val;

	if(top == -1) {
		printf("Stack empty\n");
		exit(0);
	}
	else {
		val = stack[top];
		top--;
	}	
	return val;
}
