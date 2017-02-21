#include<stdio.h>
int main()
{
  char *s[] = { "knowledge","is","power"};
  char **p;
  p = s;
  printf("\n **s = %d, p = %p, *p = %p, *p = %p, *s[0] =  %d\n"
		  , **s, p , *p, *p, *s[0]);
  printf("%s ", ++*p);
  printf("%s ", *p++);
  printf("%s ", ++*p);

  getchar();
  return 0;
}
