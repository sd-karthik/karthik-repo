#include<stdio.h>
int main()
{
  typedef int *i;
  int j = 10;
  i *a = &j;   
  printf("%d", **a);
  getchar();
  return 0;
}  
