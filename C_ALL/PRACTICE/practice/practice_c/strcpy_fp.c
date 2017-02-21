#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 32
int main()
{	
	char *buffer = malloc(SIZE * sizeof(char));

	char* (*ptr) (char*,const char*);
	ptr = strcpy;
	ptr(buffer,"pawan");
	printf("%s",buffer);
}
	
