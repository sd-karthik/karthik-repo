#include <stdio.h>
#include <stdlib.h>
#define PrintInt(expr) printf("%s : %d\n",#expr,(expr))
int main()
{
	int y = 100;
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 10;
    y = y/*p; ///!**dividing y by *p */;
    PrintInt(y);
	//printf("%s : %d\n",#expr,(expr));
	printf("%s : %d\n","y",y);
    return 0;
}
