#include <stdio.h>
  int main()
  {
   float a = 12.5;
   int * ptr = &a;

   printf ("%p %d %d\n", ptr, *ptr, *(ptr-1));
   printf("%d\n", a);
   printf("%p, %d\n",&a, *(&a));
   printf("%d\n", *(int *)&a);
   return 0;
  }
