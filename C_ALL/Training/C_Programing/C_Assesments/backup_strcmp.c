/* Program to compare 2 strings ignoring the case*/
#include"header.h"

int main(void)
{
	char *str1;
	char *str2;
	char *siz1;
	char *siz2;
	int size1;
	int size2;
	int flag;

	siz1 = (char *) malloc(sizeof(char)*MAX);
	siz2 = (char *) malloc(sizeof(char)*MAX);

	printf("WELCOME TO STRING COMPARE\n");
	printf("Enter the size of the string1\n");
	fgets(siz1, MAX, stdin);
	size1 = a_toi(siz1)+2;
	str1 = (char *) malloc(sizeof(char) *size1); 

	printf("Enter the size of the string2\n");
	fgets(siz2, MAX, stdin);
	size2 = a_toi(siz2)+2;
	str2 = (char *) malloc(sizeof(char) *size2); 
	
	printf("Enter the string1 elements\n");
	fgets(str1, size1, stdin);
	remn(str1);
	
	printf("Enter the string2 elements\n");
	fgets(str2, size2, stdin);
	remn(str2);

	Utol(str1);
	Utol(str2);
	
		flag = casecmp(str1, str2);

		switch(flag)
		{
			case 0 : printf("Strings are EQUAL\n");
					 break;

			case 1 : printf("String1 is GREATER than String2\n");
					 break;

			case -1: printf("String1 is LESSER than String2\n");
					 break;
		}	

	free(str1);
	free(str2);
	free(siz1);
	free(siz2);

	return 0;
}
