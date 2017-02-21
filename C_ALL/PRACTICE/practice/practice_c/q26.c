#include<stdio.h>
int main() 
{
   unsigned int x = -1;
   int y = ~0;
   if(x == y)
      printf("same");
   else
      printf("not same");
   printf("\n x is %u, y is %u", x, y);
   getchar();
   return 0;
}
