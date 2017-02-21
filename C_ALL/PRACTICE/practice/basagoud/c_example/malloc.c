# include <stdio.h>
# include <malloc.h>
int main()
{
		//int a = 10;
		int * p;
	//	p = &a;		
		p = malloc(0);
		printf("%d\n", sizeof(p));
		printf("%d\n", *(p-1));
		printf("%p\n", p);

		return 0;
}
