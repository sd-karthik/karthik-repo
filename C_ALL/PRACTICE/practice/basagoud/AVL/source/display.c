# include "header.h"


void display(struct list * root)
{
		if(root != NULL) {
				printf("%d\t", root -> key);
				display(root -> left);
				display(root -> right);
		}
}
