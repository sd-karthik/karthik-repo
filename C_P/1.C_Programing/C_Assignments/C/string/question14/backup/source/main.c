//main.c

//Program to remove substring in a string

//DOC: 06/12/16

#include "header.h"

int main()
{
	char *str;		//Pointer for the string
	char *sstr;		//pointer for substring

	str = (char *) malloc(sizeof(char) * MAX);	//dynamic allocation
	sstr = (char *) malloc(sizeof(char) * MAX);

	printf("Welcome to substring removal program\n");
	printf("Enter the String\n");
	fgets(str, MAX, stdin);

	printf("Enter the substring\n");
	fgets(sstr, MAX, stdin);

	str = remsstr(str, sstr);	//function call for substring removal

	printf("The output string\n");
	printf("%s", str);

	return 0;
}	
