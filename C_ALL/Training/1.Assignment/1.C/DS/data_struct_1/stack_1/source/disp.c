#include"header.h"

void disp()
{
	int d_top;

	for(d_top = top; d_top >= 0 ; d_top--)
	{
		printf("%d\n", stack[d_top]);
	}
	
}

