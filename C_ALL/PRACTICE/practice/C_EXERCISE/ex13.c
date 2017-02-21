#include<stdio.h>
#define DPRINTF(x) printf("%s:%d\n",#x,x)
int main()
{
	int ch = 45;
	DPRINTF(ch);
	return 0;
}
