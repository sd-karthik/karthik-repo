# include "header.h"

LIST * create_node()
{
		LIST * list = (LIST*) malloc( sizeof(LIST));
		list -> seconds = 0;
		list -> next = NULL;

		return list;
}


