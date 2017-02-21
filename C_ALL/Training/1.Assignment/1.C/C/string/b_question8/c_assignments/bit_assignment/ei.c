#include<stdio.h>
#include<string.h>
#define MAX 50 

extern int valid(char s[30]);
void main()
{
	int j;
	int i;
    char s[30];
   fgets (s , MAX , stdin);
//    gets(s);
    j=valid(s);                                                                 
    printf("res:%d\n",j); 
   

}
