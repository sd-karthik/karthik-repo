#include<stdio.h>
#include<string.h>
int main()

{
    char str[20];
	char s1[20];
	int i;
	int j=0;
	int k=0;
	gets (str);
	for (i=0;i<20; i++){
		if (str[i]!='\0')
		{
		j++;
		}
		else 
		break;
	}
	printf("strlen :%d",j);
	for (i=0;i<=(j);i++){
		if(i == 2)
		s1[k++]='g';
		s1[k++]=str[i];
	}	
	s1[k]='\0';
	puts(s1); 




}
