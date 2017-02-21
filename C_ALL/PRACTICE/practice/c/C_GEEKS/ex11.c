#include <stdio.h>

#define R 10
#define C 20

int main()
{
		int (*p)[R][C];
		printf("%d\n",  sizeof(*p));
		printf("%d",  sizeof(p));
		putchar(10);
		return 0;
}
