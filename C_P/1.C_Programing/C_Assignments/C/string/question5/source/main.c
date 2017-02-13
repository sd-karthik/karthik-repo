//Program to append n chqaracters from one strig to another

#include"header.h"

int main()
{
	char *src;                // source string
	char *dst;                // destination string
	char *p;
	char cnum;
	int num = 2;

	p = (char *)malloc(MAX*sizeof(char));
	src = (char *)malloc(MAX*sizeof(char));
	dst = (char*)malloc(MAX*sizeof(char));
		
	printf("\n enter the source string: ");
	fgets(src, MAX, stdin);

	printf("\n enter the destination string: ");
	fgets(dst, MAX, stdin);
	
	printf("Enter the number of characters to be appended\n");
	scanf("%d", &num);
//	cnum = getchar();
//	num = a2i(cnum);
//	printf("Atoi successful\n");
	p = snappend(src, dst, num);	// function call
	
	printf("The appended string is\n");
	printf("%s\n",p);

	return 0;
}
