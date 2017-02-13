#include"header1.h"

void display (void)
{	
	int x;
	x = top-1;
	printf("stack elements are\n");
	while (x > -1){
	printf("stack[%d]: %d\n",x,stack[x]);
	x--;
	if(x == -1){
		printf("stack empty\n");
	}
	}
}

