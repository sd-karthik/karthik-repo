# include "header.h"

LIST * insert_node(LIST * head, LIST * new)
{
	LIST * temp = head;
	LIST * temp1 ;
	int status;
	if(head == NULL) {
			head = new;
			status = pthread_cond_signal(&data -> cond); 	
			if(status !=0) 
					err_abort(status,"Cond signal");

			return head;
	} 
	if(head -> seconds >= new -> seconds) {
			new -> next = temp ;
			head = new;
			status = pthread_cond_signal(&data -> cond);
			return head;
	}  

	temp1 = head;
	temp = temp -> next;
	while(temp) {
			if(temp -> print_sec >= new -> print_sec) {
					new -> next = temp;
					temp1 -> next = new;
					break;
			}
			temp = temp -> next;
			temp1 = temp1 -> next;
	}

	temp1 -> next = new;

	return head;
}
