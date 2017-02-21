#include <stdio.h>

int main()
{
	void *p = NULL;
	int a[4] = {1, 2, 3, 8};
	int *ptr = NULL;
	int n;

	int *tmp = NULL;

	p = &a[3];
	ptr = &a[1];

	tmp = p;
	n = tmp - ptr;
	n = n + 010;

	printf("value of N => %d\n", n);

	return 0;
}
