# include <stdio.h>

void fun(a, b)
	int a,b;
{
	printf("a ==>%d b==>%d\n", a, b);
	return ;
}


int main(argc, argv)
	int argc;
	char * argv[];
{
	printf("argc ==> %d\n", argc);
	fun (20, 30);
	return 0;
}
