#include "header.h"

int main()
{
	char sbuf[100];
	char dbuf[100];
	char num[100];
	int n;

	printf("Enter the string\n");
	fgets(sbuf, 100, stdin);

	printf("Enter the number of characters to copy\n");
	fgets(num, 5, stdin);

	n = validate(num);
	printf("%d",n);
	str_ncpy(sbuf,dbuf,n);
	
	printf("The copied string is\n");

	fputs(dbuf, stdout);
	return 0;
}	
