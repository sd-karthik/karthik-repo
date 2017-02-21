//Program to find address of first occurence of the character
#include"header.h"

int main()
{
	char *buf;			//buffer to store string
	char *ptr = NULL;	//pointer to recieve address
	char c ;			// character to search

	buf = (char*) malloc(sizeof(char) * 100);	

	printf("Enter the string\n");
	if((fgets(buf,MAX,stdin)) == '\0') {
		printf("fgets failed\n");
	}

	printf("Enter the character to search\n");
	c = getchar();
	
	ptr = chr_add_instr(buf, c);

	if(ptr == 0)
	{
		printf("char not found\n");
		exit(0);
	}
	else {
		printf("The starting address of string:\n%p\n", buf);
		printf("The first occurence of the character %c in the string is \n", c);
	printf("%p\n", ptr);
	}
	
	return 0;
}
