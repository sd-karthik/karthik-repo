# include "header.h"

struct list * rightRotate(struct list * l)
{
		struct list * l1 = l -> left;
		struct list * temp = l1 -> right;

		l1 -> right = l;
		l -> left = temp;

		l -> height = max(height( l -> left), height(l -> right)) + 1;
		l1 -> height = max(height(l1 -> left), height(l1 -> right)) + 1;

		return l1;
}
