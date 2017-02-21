#include <stdio.h>

int main()
{
	char *name[] = {"hai", "hi", "hello"};
	char aname[][15] = {"hi", "hi"};

	printf("sizeof()---> %d\n", sizeof(name));
	printf("sizeof()---> %d\n", sizeof(aname));
	return 0;
}
