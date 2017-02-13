#include<stdio.h>
#include<stdlib.h>

/*int str_len(char *str)
{
	int len=0;

	while(str[len])
	{
		len++;
	}
	
	return len;
}
*/
int *squeeze(char *str)
{
	int i;
	int j;
	
	for(i=1, j=0;str[i] ='\0'; i++)
	{
	if(str[j] != str[i])
	{
		str[j]=str[i];
		j++;
	}
}	
	str[j] = '\0';
	printf("%s",str);
	
}

int main(void)
{

	char *str1 = {0};
	char *str2 = {0};
	char *p;

	str1=(char *)malloc(sizeof(char)*20);
	str2=(char *)malloc(sizeof(char)*20);

	printf("WELCOME TO STRING SQUEEZE PROGRAM\n");
	printf("Enter the String \n");
	fgets(str1, 20, stdin);

	printf("Squeezed String\n");
	p=	squeeze(str1);

	fputs(str2, stdout);
	printf("\n");
	return 0;
}
