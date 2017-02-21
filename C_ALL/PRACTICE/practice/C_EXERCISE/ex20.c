#include <stdio.h>

int main(void)
{
   int a[][3] = {1, 2, 3, 4, 5, 6};
   int (*ptr)[3] = a;

   printf ("%x\n%x\n%x\n",a, a+1, *(ptr+1));
   printf("%d %d ", (*ptr)[1], (*ptr)[2]);

   ++ptr;
   printf("%d %d\n", (*ptr)[1], (*ptr)[2]);

   return 0;
}

