#include "header.h"

void main()
{
	char *sbuf;
	char *dbuf;
	
	sbuf = (char*) malloc(sizeof(char) * 100);
	dbuf = (char*) malloc(sizeof(char) * 100);
	
	printf("Enter the string\n");
	fgets(sbuf,100,stdin);

	mystrcpy(dbuf,sbuf);

	printf("The copied string is \n");
	puts(dbuf);
}
