# include "header.h"


int getBalance(struct list * l)
{
		if (l == NULL)
				return 0;
		return height(l->left) - height(l->right);
}
