 
#include <stdio.h>
#include <malloc.h>
struct s1 
{
		int data;
		struct s1 * next;
};
int main()
{
	struct s1 * node = NULL;
	struct s1 * p = NULL;
	node = (struct s1 *)malloc(sizeof(struct s1));

	node->data = 10;
	node->next = NULL;

	p = (struct s1 *) malloc(sizeof(struct s1));

	printf("%d\n", p->data);
	printf("%p\n", p);
	if(NULL == p)
			printf("Error\n");
	else {
			node->next = p ;
			p = node ;
	}
	while(p){
			printf("%d\n", p->data);
			p = p->next;
	}
	return 0;
}
