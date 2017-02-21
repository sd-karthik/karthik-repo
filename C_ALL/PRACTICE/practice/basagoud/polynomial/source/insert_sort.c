/*
 * insert_node, insert the nodes into list
 * of expression f(x,y,z).
 */

#include "header.h"
/*insert_node function*/
p_t * insert_node(p_t *new, p_t *head)
{
	p_t *temp = NULL;

	if (!new->coeff) {	/*if coefficent is zero remove the node*/
		FREE(new);
		return head;
	}

	if (!head)	/*if list is empty*/
		return new;
	temp = head;
	
	if (temp -> px < new->px) {	/*if new -> px is greater*/
		new->next = temp;
		return new;	
	}

	else if (temp->px == new->px) { 	/*x powers are equal*/
		if (temp->py < new->py) { 	/* new -> py is greater */
			new->next = temp;
			return new;
		}
		else if (temp->py == new->py) { /*px and py are equal*/
			if (temp->pz < new->pz) { /*new ->pz is greater*/
				new->next = temp;	
				return new;			
			}
			else if (temp->pz == new->pz) {	/*all powers are equal*/
				temp->coeff += new->coeff;
				FREE(new);
				return temp;
			}
		}

	}

	while(temp->next) {
		if (temp ->next->px < new->px) {	/*new node x power greater*/
			new->next = temp ->next;
			temp->next = new;
		}
		else if (temp->next->px == new->px) {	/*new node and temp node x powers are equal*/
			if (temp->next->py < new->py) {	/*new node py power is greater*/
				new->next = temp->next;
				temp -> next = new;
			}
			else if (temp->next->py == new->py) {	/* new node py and temp py are equal*/
				if (temp->next->pz < new->pz) {	/*new node pz and temp node pz are equal*/
					new->next = temp->next;
					temp->next = new;	
				}
				else if (temp->next->pz == new->pz) {	/*all powers are equal*/
					temp->next->coeff += new->coeff;
					FREE(new);
					return head;
				}
			}
		}
		temp = temp ->next;
	}
	if (temp->next == NULL)
		temp ->next = new;
	return head;
}/*end of insert_node function*/

