#include <stdio.h>

int main(void)
{
   int a[5] = { 1, 2, 3, 4, 5 };
   int *ptr = (int*)(&a + 1);

   printf("%d %d a=%u &a=%u ptr=%u\n", *(a + 1), *(ptr - 1), a , &a, ptr );

   return 0;
}

