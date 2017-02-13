// Function to display the tree elements in pre-order

#include "myheader.h"

void display_tree(NODE *temp) {
	if (temp != NULL) {
		printf("%d\n", temp->data);
		display_tree(temp->r_child);
		display_tree(temp->l_child);
	}
}
