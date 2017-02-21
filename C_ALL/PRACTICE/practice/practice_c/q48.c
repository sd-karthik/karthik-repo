/**********************************************8printing name using function poiter*******************************
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct my_struct
	{
		char *name;
		void (*fun)(struct my_struct *);
	}MYSTRUCT;

void n(MYSTRUCT *name)
{
	name -> name = "pawan";
}

int main()
{

	MYSTRUCT naming ;
	MYSTRUCT *ptr = &naming;
	ptr->fun = n;
	ptr->fun(ptr);
	printf("name ::%s\n",ptr->name);
	
}
	
	
