#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char *str1;
	char *str2;

	str1=(char *)malloc(sizeof(char)*20);
	str2=(char *)malloc(sizeof(char)*20);

	printf("Enter 1st string\n");
	fgets(str1, 20, stdin);

	printf("Enter 2nd string\n");
	fgets(str2, 20, stdin);

	printf("%d", strcmp(str1, str2));
}
