#include <stdio.h>

const int a;
//int *p1 = &a;
//*p1 =5;
int fun(void)
{
	int *p = &a;
	*p = 5;
 printf("%d", a);
return 0; 
}
