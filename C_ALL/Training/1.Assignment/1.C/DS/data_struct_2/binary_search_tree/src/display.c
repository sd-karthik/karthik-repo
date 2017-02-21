// Function to display the tree elements in pre-order

#include "myheader.h"

void display_tree(CHILD *temp) 
{
	char *c_choice;
	int choice;
	MEM_ALLOC(c_choice);	
	VALID_MEM_ALLOC(c_choice);
	
	printf("Enter the Display Choices:\n");
	printf("1.Preorder\n2.Post order\n3.In-order\n4.Level Order\n");
	fgets(c_choice, MAX, stdin);
	choice = a2i(c_choice);
	switch(1)
	{
		case 1:	if (temp != NULL) {
					printf("%d\n", temp->data);
					display_tree(temp->r_child);
					display_tree(temp->l_child);
				}
				break;
	

		case 2:	if (temp != NULL) {
		
					display_tree(temp->r_child);
					display_tree(temp->l_child);
					printf("%d\n", temp->data);
				}
				break;

		case 3:	if (temp != NULL) {
					display_tree(temp->r_child);
					printf("%d\n", temp->data);
					display_tree(temp->l_child);
				}
				break;

		case 4:	if (temp != NULL) {
					printf("%d\n", temp->data);
					display_tree(temp->r_child);
					display_tree(temp->l_child);
				}
	}
}
