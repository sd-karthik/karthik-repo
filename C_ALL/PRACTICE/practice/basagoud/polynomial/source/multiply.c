/*
 * multiplication of two polynomial expressions
 */

#include "header.h"
/*multiply function*/
p_t *multiply(p_t *f_head1, p_t *g_head1, p_t *h_head)
{
	p_t *r_new = NULL;
	p_t *temp = NULL;

	p_t *f_head = NULL;
	     f_head = f_head1;
	p_t *g_head = NULL;
	     g_head = g_head1;

	if (!f_head && !g_head) {	/*both expressions are NULL*/
		printf("No expressions\n");	
		return NULL;
	}
	
	if (!f_head)	/*f(x,y,z) is NULL*/
		return g_head;
	if (!g_head)	/*g(x,y,z) is NULL*/
		return f_head;
	temp = g_head;
	while(f_head) {
		g_head = temp;
		while(g_head) {
			if ( NULL == (r_new = (p_t *) malloc(sizeof(p_t)))) {	/*allocate memory for r_new*/
				perror("malloc");
			}
	
			r_new->coeff = f_head->coeff * g_head->coeff;	/*multyply the coeficent*/
			r_new->px = f_head->px + g_head->px;		/*add the x powers*/
			r_new->py = f_head->py + g_head->py;		/*add the y powers*/
			r_new->pz = f_head->pz + g_head->pz;		/*add the z powers*/
		 
			h_head = insert_node (r_new, h_head);	/*insert into h(x,y,z)*/
	
			g_head = g_head->next;		/*increment the head*/
		}
		f_head = f_head->next; 
	}
	return h_head;
}
