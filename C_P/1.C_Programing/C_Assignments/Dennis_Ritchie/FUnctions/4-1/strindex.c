#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20

unsigned int strindex( char *, char);

int main()
{
	char *str = NULL;
	char t = NULL;
	unsigned int pos = 0;

	if( NULL == (str = (char *) malloc(sizeof(char) * MAX)))
	{
		printf("malloc failed\n");
		return 0;
	}
	
	printf("Enter the String\n");
	if(NULL == fgets(str, MAX, stdin))
	{
		printf("fgets failed\n");
		return 0;
	}
	
	printf("Enter the character to find\n");
	t = fgetc(stdin);

	pos = strindex(str, t);
	
	if( pos != -1)
		printf("The position of character '%c' is : %d", t, pos);
	else
		printf("The character '%c' is not found\n", t);
	return 0;

}

unsigned int strindex(char *s, char t)
{
	unsigned int i;

	for(i = strlen(s) ; (i >= 0) ; i--)
	{
		if(*(s + i) == t)
		{
			return i+1;
		}
	}
	return -1;
}
