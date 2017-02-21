#include<stdio.h>
int main()
{
  typedef static int *i;
  int j;
  i a = &j;   
  printf("%d", *a);
  getchar();
  return 0;
}  
