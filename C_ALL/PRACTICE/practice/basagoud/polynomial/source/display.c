/*
 * display the expressions
 */
#include "header.h"
/*display list function*/
void display_list( p_t *head)
{
	p_t *temp = NULL;

	temp = head;
	if (!temp)
		printf("null\n");

	while(temp) {
		printf("%d", temp->coeff);
		if (temp->px)
			printf("x^%d",temp->px);	 /*print power of x*/

		if (temp->py) 
			printf("y^%d",temp->py);	/*print power of y*/

		if (temp->pz) 
			printf("z^%d",temp->pz);	 /*print power of z*/
		if (temp->next  && temp->next->coeff > 0)
			printf(" + ");
		temp = temp ->next;
	}

} /*end of display list function*/

#if 0
	/*scrach*/
		(temp->px) ? printf("x^%d",temp->px) : 0; /*print power of x*/

		(temp->py) ? printf("y^%d",temp->py) : 0;	/*print power of y*/

		(temp->pz) ? printf("z^%d",temp->pz) : 0; /*print power of z*/

		if (temp->next  && temp->next->coeff > 0)
			printf(" + ");
		if (temp->coeff < 0)
			printf(" ");
		else
			printf(" + ");
		printf("%dx^%dy^%dz^%d", temp ->coeff, temp->px, temp->py, temp->pz);
#endif
