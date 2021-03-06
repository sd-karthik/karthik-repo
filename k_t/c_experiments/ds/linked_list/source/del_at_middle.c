
#include "header.h"

void del_at_middle(ST **head)
{
	int count = 1;
	
	ST *temp = NULL;
	ST *prev = NULL;

	temp = *head;

	if(temp == NULL) {
		printf("list is empty \n");
		return;
	}

	if((nodes / 2) == 0) {
		*head = NULL;
		nodes--;
		return;
	}

	while(count != ((nodes / 2) + 1)) {
		prev = temp;
		temp = temp->next;
		count++;
	}

	prev->next = temp->next;
	nodes--;
}
