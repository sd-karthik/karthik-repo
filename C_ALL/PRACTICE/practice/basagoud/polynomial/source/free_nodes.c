/*
 * free_node(), free the list 
 */
#include "header.h"
/* free_node function*/
void free_node(p_t *head)
{
	if (!head)
		return ;

	free_node(head->next);
	FREE(head);	
}/*end of free_node*/
