#include<stdio.h>

#define maxmin (num1,num2)        \
        int i;                    \
        for(i=31,i>=0;i--){       \
        if((num1>>i)^(num2>>i)==0)\
        {  if(i==0)               \
        {printf("numbers are equal\n");}}  \
        if(((num1>>i)&1)>((num2>>i)&1))    \
                printf("num1 greater\n");  \
        else                               \
                printf("num2 smalller\n");}
int main()
{
unsigned int num1,num2;
printf("enter num1\n");
scanf("%d",&num1);
printf("enter num2\n");
scanf("%d",&num2);

}

