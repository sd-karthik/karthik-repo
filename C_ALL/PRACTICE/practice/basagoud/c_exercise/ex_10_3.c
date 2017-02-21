#include <stdio.h>

int main()
{
	char *p = "hi";
	char q[] = "hey hello";
	int n;

	n = q - p;

	printf("%x\n", n);
	q[4] = 0;

	printf("%s\n", q);
	return 0;
}
