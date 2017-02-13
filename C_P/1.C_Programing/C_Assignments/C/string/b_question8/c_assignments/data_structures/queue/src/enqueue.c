#include "header1.h"

void enqueue (int ele)

{	printf("r : %d",r); 
	if (r >= (limit))
		printf("queue full\n");
	else{
		queue[r] = ele;
		r++;
		}	
}



