// Function to delete a parent with only one child

#include "header.h"

void delet(void) {
	char *value = NULL;
	MEM_ALLOC(value);
	VALIDATE_MEM_ALLOC(value);

	NODE *temp = NULL;
	MEM_ALLOC_S(temp);
	VALIDATE_MEM_ALLOC(temp);

	NODE *temp1 = NULL;
	MEM_ALLOC_S(temp);
	VALIDATE_MEM_ALLOC(temp);

	temp = root;
	temp1 = temp;

	printf("Enter the element to be deleted\n");
	fgets(value, NUM_MAX, stdin);

	while (1) {
		if (a2i(value) == (temp -> data)) {
			if (((temp -> r_child) != NULL) && ((temp -> l_child) == NULL)) {
				if ((temp1 -> r_child) == temp) {
					temp1 -> r_child = temp -> r_child;
					break;
				} else {
					temp1 -> l_child = temp -> r_child;
					break;
				}
			} else if (((temp -> r_child) == NULL)
						&& ((temp -> l_child) != NULL)) {
				if ((temp1 -> r_child) == temp) {
					temp1 -> r_child = temp -> l_child;
					break;
				} else {
					temp1 -> l_child = temp -> l_child;
					break;
				}
			} else {
				printf("Deleting condition is not satisfied\n");
				break;
			}
		} else if (a2i(value) < (temp -> data)) {
			temp1 = temp;
			temp = temp -> r_child;
		} else {
			temp1 = temp;
			temp = temp -> l_child;
		}
	}
}
