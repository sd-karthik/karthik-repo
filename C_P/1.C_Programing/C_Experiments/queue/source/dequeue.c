#include"header.h"

int dequeue()
{
	int item;

        front++;

	if((front == -1) || (front > rear))                                         
        printf("queue is empty \n");

	else {
		item =queue[front];
	}
	return item;
}
