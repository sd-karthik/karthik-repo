#include "header1.h"

void pop(void)
{	
	int a;
	if (top <= 0 ){
		printf("stack is  empty\n");
	}
	else{
		top--;	
		a =	stack[top];
		printf("popped val	stack[%d]:%d\n",top,a);		

	}

}
