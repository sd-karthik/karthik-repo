#include "header1.h"

extern int f;
extern int r;
extern count;

void enqueue (int ele)

{	
	if (count >= limit)
		printf("queue full\n");
	else{
		if (r == (limit-1))
		r=-1;
		r++;
		count++;
		queue[r] = ele;

		}	
}



