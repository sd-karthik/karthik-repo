#include<stdio.h>
extern int a;
static int b = 5;

int main()
{
	const int c = 6;
	int a;
	a = 4;
	auto int d =7;
	register int e = 8;
	
	printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);

	return 0;
}
