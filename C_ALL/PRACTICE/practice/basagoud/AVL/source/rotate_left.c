# include "header.h"

struct list * leftRotate(struct list * l)
{
		struct list * l1 = l -> right;
		struct list * temp = l1 -> left;

		l1 -> left = l;
		l -> right = temp;

		l -> height = max(height( l -> left), height(l -> right)) + 1;
		l1 -> height = max(height(l1 -> left), height(l1 -> right)) + 1;

		return l1;
}
