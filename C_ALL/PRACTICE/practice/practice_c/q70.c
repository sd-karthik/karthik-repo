#include <stdio.h>

int main()
{
	int i = 10;

	void *p = &i;
	printf("%f\n", *(float*)p);
	printf("%d\n", *(int *)p);
	return 0;

}
