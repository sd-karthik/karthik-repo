#ifndef header
#define header 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#include <limits.h>
#include <stdio_ext.h>
#include <unistd.h>

#define LEN 64
#define FREE(s) free(s); s = NULL;
/*
 * structure for polynomial expression
 */
typedef struct poly {
	int coeff;
	int px;
	int py;
	int pz;
	struct poly *next;

}p_t;


p_t * create();		/*create a list*/
p_t * insert_node(p_t *, p_t *);	/*insert the node into list*/
p_t * multiply(p_t *, p_t *, p_t *);	/*multiply the two polynomial expression*/
int read_int();		/*read the integer number*/
	
void display_list( p_t *);	/*display the node of list*/
void free_node(p_t *);		/*free the list*/


#endif
