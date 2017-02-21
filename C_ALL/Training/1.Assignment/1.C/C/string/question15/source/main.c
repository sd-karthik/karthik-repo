#include "header.h"

void main()
{
	char *str;
	int pos;
	char *ip;
	char ch;
	char *p;
	
	str=(char *) malloc(sizeof(char)* MAX);

	printf("Enter a string\n");
	fgets(str, MAX, stdin);

	printf("Enter the position for the character to input\n");
	fgets(p, MAX,stdin);
	
	printf("Enter the char to input\n");
	ch=fgetc(stdin);

	
	pos=atoi(p);
 	
	ip = insertchar(str, ch, pos);

	printf("The output string is:\n");
	fputs(str, stdout);

}


