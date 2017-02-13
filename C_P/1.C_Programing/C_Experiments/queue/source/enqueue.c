#include"header.h"

void enqueue(int item)
{
	rear++;

	if(rear >= MAX){ 	
			printf("Queue is full\n");		
	}
	else {
	queue[rear] = item;
	}
}
