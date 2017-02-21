/*
 * polynomial expression multiplication
 * h(x,y,z) = f(x,y,z) * g(x,y,z)
 * 
 */
#include "header.h"
/*main function*/
int main()
{

	p_t *f_head = NULL;
	p_t *g_head = NULL;
	p_t *h_head = NULL;
	p_t *new = NULL;
	int ch = 1;

	while (1) {
	
		printf("Enter:\n\t1: first expression f(x,y,z)\n\t2: second expression g(x,y,z)\n"
				"\t3: multiply h(x,y,z) = f(x,y,z) * g(x,y,z) \n");	
		printf("\t4: Display expressions\n\t5: Exit (free the list)\n");
		ch = read_int();	/*read integer number*/
		if ((ch == 1) || (ch == 2)) {
				free_node(h_head);
				h_head = NULL;
		}
		switch(ch) {
			case 1:
				new = create();
			    f_head = insert_node(new, f_head);
				break;
			case 2: 
				new = create();
				g_head = insert_node(new, g_head);
				break;
			case 3:
				h_head = multiply(f_head, g_head, h_head);
				break;	
			case 4: 
				printf("f(x,y,z) = ");
				display_list(f_head);
				printf("\ng(x,y,z) = ");
				display_list(g_head);
				printf("\nh(x,y,z) = ");
				display_list(h_head);
				break;
			case 5: free_node(f_head);
				free_node(g_head);
				free_node(h_head);
				exit(EXIT_SUCCESS);
			default:
				printf("Enter valid choice\n");
		}
		printf("\n");
	}
	return 0;
}/*end of main*/
