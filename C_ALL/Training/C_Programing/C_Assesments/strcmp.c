/* Program to compare 2 strings ignoring the case*/

#include<stdio.h>
#include<stdlib.h>

int str_len(char *str)	// Function to calculate string length
{
	int i=0;
	while(str[i])
	{
		i++;
	}
	
	return i-1;
}

int valid(char *str)	//Function to validate
{
	int i=0;
	while(str[i])
	{
		if((str[i] >= 'a') && (str[i] <= 'z'))
			{
				i++;
			}
		else
			{
				printf("Invalid input\n");
				break;
			}
	}
	return 0;
}

void remn(char *str)
{
	str[str_len(str)] = '\0';
}

void Utol(char *str)
{
	while(*str)
	{
		if((*str >= 65) && (*str <= 90))
			{
				*str+=32;
				*str++;
			}
		else {
			*str++;
			}
	}
}

int casecmp(char *str1, char *str2)	//Function to compare
{
	while(*str1)
	{
		if(*str1==*str2) {
			*str1++;
			*str2++;
			}

		else if(*str1 > *str2) {
			return 1;
			}

		else {
			return -1;
			}
	}

	return 0;
}

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
