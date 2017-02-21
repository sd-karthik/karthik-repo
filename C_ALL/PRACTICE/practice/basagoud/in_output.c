#include<stdio.h>

#define MAX 100

int main()
{
	char str[MAX];
	int i=0,c;
	printf("Enter any string\n");
	while((c=getchar())!=EOF)
	str[i++]=c;
	str[i]='\0';
	printf("After reading\n %s\n",str);
	return 0;
}
