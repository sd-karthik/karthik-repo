/* Program to compare 2 strings ignoring the case*/
#include"header.h"

int main(void)
{
	char str1[100];	// Input String1
	char str2[100];	// Input String2
	int flag;

	printf("WELCOME TO STRING COMPARE\n");
	printf("Enter the string1 elements\n");
	fgets(str1, 100, stdin);
	printf("Enter the string2 elements\n");
	fgets(str2, 100, stdin);

	remn(str1);		// function call to remove '\n' 
	remn(str2);

	Utol(str1);		//uppercase to lowercase function call
	Utol(str2);
	
	valid(str1);	//Input validation
	valid(str2);
	
	flag = casecmp(str1, str2);	// Comparision

	switch(flag)
	{
		case 0 : printf("Strings are EQUAL\n");
				 break;

		case 1 : printf("String1 is GREATER than String2\n");
				 break;

		case -1: printf("String1 is LESSER than String2\n");
				 break;
	}	
	
	return 0;
}
