/*String Reverse Program*/
#include "header.h"

int main(void)
{
	char *str1;
	char *str2;
	int len;
	int flag = 0;	
	
	str1 = (char*)malloc(sizeof(char)*20);
	str2 = (char *)malloc(sizeof(char)*20);

	printf("Welcome to string palindrome program\n");
	printf("Enter the string\n");
	fgets(str1, 20, stdin);
	
	len = str_len(str1) - 1;

	str_rev(str1, str2, len);	
	
	fputs(str2,stdout);

	flag = str_cmp(str1, str2, len);
	
	if(flag) {
		printf("\nThe String is Palindrome\n");
	} else {
		printf("\nThe String is not palindrome\n");
	}
	
	return 0;
}
