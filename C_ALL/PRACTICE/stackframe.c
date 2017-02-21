# include <stdio.h>

int fun1 (int a)
{
		int x;
		x = a + 10;
		return x;
}
int main()
{
		int b = 10;
		int x;
		x = fun1(b);
		printf("%d\n",x);
		return 0;
}
