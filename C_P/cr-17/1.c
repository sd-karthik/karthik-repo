#include <stdio.h>

int a;
int b = 10;
const int c = 20;

int main(void)
{
	int d;
	int e = 30;	
	const int z = 40;

	e = a + b;

	printf("c=%d\n", c);

	return 0;
}
