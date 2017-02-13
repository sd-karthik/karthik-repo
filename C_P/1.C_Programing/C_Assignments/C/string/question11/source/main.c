#include"header.h"

int main()
{
	int len;
	char *str1;
	char *str2;

	str1 = (char*)malloc(sizeof(char) * 20);
	str2 = (char*)malloc(sizeof(char) * 20);

	printf("Enter the string\n");
	fgets(str1, 20, stdin);

	len = str_len(str1);
	
	str_rev(str1, str2, len);

	printf("\nReversed String\n");
	fputs(str2, stdout);

	return 0;
}
