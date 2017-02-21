/*
 * creates the new node of type p_t
 */
#include "header.h"
/*create function*/
p_t * create()
{
	p_t *new = NULL;

	if(NULL == (new = (p_t  *) malloc( sizeof(p_t)))) {	/*allocate memory for new node*/
		perror("malloc");
	}

	printf("Enter : coeff, (x pow), (y pow) and (z pow) \n");	
	new -> coeff = read_int();	/*read the coefficent*/
	new -> px = read_int();		/*read the power of x*/
	new -> py = read_int();		/*read the power of y*/
	new -> pz = read_int();		/*read the power of z*/
	new -> next = NULL;

	return new;
}/*end of create function*/
