# include <stdio.h>
# if 0
typedef  int INT;


int main()
{


auto struct 
{
		INT a1;
		char a[888888888];
		char b;
}anony;
//		anony obj;
		return 0;
}
#endif
# if 0
int fun (register int , int);

int main()
{
		int a = 10;
		int b = 35;
		int r = fun (a, b);
		printf("%d\n", r);
		return 0;
}

int fun (register int a, int b)
{
		int c = a + b;
		return c;
}
# endif
# if 1
struct a{
	int b:3;
	int a:4;
}a;
int main()
{
	//int a[10] = { 0 };
	a.b = 1;
	a.b = a.b << 2;
	a.a = 9;
	printf("%d\n", a.b);
	printf("%d\n", a.a);
	return 0;
}
#endif
