# include <stdio.h>

int fun()
{
		int j = 4;
		printf("Hello\n");
		return (&j);
}
int fun1()
{
		int k = 10;
		printf("Hai\n");
		return (&k);
}
int main()
{
		int *p  ;
		p = fun();
		fun1();
		printf("%d\n", *p);
		return 0;
}


/*
 *out put is 10 ... why?
 */
