#include "header.h"

void creat_node(ST **head)
{

	ST *new;

	if((new = (ST *)malloc(sizeof(ST))) == NULL){
		
		printf("malloc is failed to allocate memory\n");
		exit(1);
		}
	
		printf("enter the data \n");
		new->data = newdata();
		nodes++;
		new->prev = NULL;
		new->next = *head;
		*head = new;
}
		
