#include"header.h"

int str_len(char *str);
int squeeze(char *str1, char *str2);

int main(void)
{

	char *str1 = {0};
	char *str2 = {0};

	str1=(char *)malloc(sizeof(char)*20);
	str2=(char *)malloc(sizeof(char)*20);

	printf("WELCOME TO STRING SQUEEZE PROGRAM\n");
	printf("Enter the String \n");
	fgets(str1, 20, stdin);

	printf("Squeezed String\n");
	squeeze(str1, str2);

	fputs(str2, stdout);
	printf("\n");
	return 0;
}
