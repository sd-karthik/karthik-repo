#include <stdio.h>
  int main()
  {
   float a = 12.5f;
   printf("%d\n", a);

   printf("%f\n", *(float*)&a);
   printf("%d\n", *(int *)&a);
   return 0;
  }
