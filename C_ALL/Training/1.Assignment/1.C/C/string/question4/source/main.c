//Program to append 2 strings

#include"header.h"

int main()
{
	char *src;              // source string
	char *dst;              // destination string
	char *p;				//pointer to store character address

	src = (char *)malloc(30*sizeof(char));
	dst = (char*)malloc(30*sizeof(char));
		
	printf("Enter the source string:\n");
	fgets(src, 30, stdin);

	printf("Enter the destination string:\n");
	fgets(dst, 30, stdin);

	p = sappend(src, dst);	// function call to append
	
	printf("The appended string is\n");
	fputs(p, stdout);	//display appended string

	return 0;
}
