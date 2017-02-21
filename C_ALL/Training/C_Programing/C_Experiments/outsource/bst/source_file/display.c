// Function to display the tree elements in pre-order

#include "header.h"

void display(NODE *temp) {
	if (temp != NULL) {
		printf("%d\n", temp->data);
		display(temp->r_child);
		display(temp->l_child);
	}
}
