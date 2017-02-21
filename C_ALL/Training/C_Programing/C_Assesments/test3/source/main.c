#include"header.h"

int main(void)
{
	char *str1 = {0};
	char *str2 = {0};
	int count = 0;
	int i;
	int len;

	str1 = (char *) malloc(sizeof(char) * MAX);
	str2 = (char *) malloc(sizeof(char) * MAX);

	printf("WELCOME TO WORD REVERSE IN A SENTENCE\n");
	
	printf("Enter a string\n");
	
	if( NULL == fgets(str1, MAX, stdin))
	{
		printf("fgets failed\n");
		exit(0);
	}
	
//	valid(str1);
	
	str_cpy(str1, str2);
	printf("The Reversed words in the sentence:\n%s\n", str2);
	
	free(str1);
	free(str2);
	return 0;
} 
