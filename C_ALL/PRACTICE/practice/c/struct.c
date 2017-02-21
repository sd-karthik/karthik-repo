# include <stdio.h>

struct s 
{
		int a :4;
		int b:4;
}r = {9, 9};
int main()
{
		printf("%d %d\n", r.a, r.b);
		return 0;
}
