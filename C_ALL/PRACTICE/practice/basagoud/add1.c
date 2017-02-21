#include <stdio.h>

int main()
{
	int a = 5, b = 5;
	int res = 0;

	res = printf("%*c%*c", a,' ', b, ' ');

	printf("res --> %d\n", res);

	return 0;
}
