#include<stdio.h>

void odd_even(int);
int main()
{
    int num=23;
    odd_even(num);
    return 0;
}

void odd_even(int n)
{
   if(n%2==0)
     printf("The number is even\n");
   else
   printf("The number is odd\n");
}
   
