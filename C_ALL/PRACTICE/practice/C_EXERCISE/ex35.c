#include <stdio.h>
#include <stdlib.h>
#define PrintInt(expr) printf("%s : %d\n",#expr,(expr))
#define  printF(hello) printf("%s\n",#hello);
int main()
{
	int y = 100;
	int *p;
	p = (int *)malloc(sizeof(int));
	*p = 10;
	y = y / *p;  /*dividing y by *p */
	PrintInt(y);
	printF("hi");
	return 0;
}
