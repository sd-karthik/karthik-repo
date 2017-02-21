 # include <stdio.h>
static char buf[256] = {65};

int * p ;

int main()
{
		printf("Hello\n");

		p = (int *)main;

		printf("Address of main ==> %p\n", p);
		
		*p = 12;

		return 0;
}
