# include "header.h"

int height(struct list * l)
{
		if (l == NULL)
				return 0;
		return l->height;
}
