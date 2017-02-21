#include"header.h"
	
int main(void)
{
	char *str1;	//string 1
	char *str2;	//string 2
	int flag;	// flag for output

	str1 = (char *) malloc(sizeof(char) * 30);
	str2 = (char *) malloc(sizeof(char) * 30);

	printf("WELCOME TO STRING COMPARE\n");
	printf("Enter the 1st string\n");
	fgets( str1, 30, stdin);
	
	
	printf("Enter the 2nd String\n");
	fgets( str2, 30, stdin);

	if(str_len(str1) > str_len(str2))
	{
		flag = str_cmp(str1, str2);
		switch(flag)
		{
			case 0 : printf("Strings are equal\n");
				break;
			case 1 : printf("String1 is greater\n");
				break;
			case -1: printf("string1 is less\n");
				break;
	//(flag==0)? printf("Strings are equal\n"): ((flag ==-1)? printf("string1 is less\n") : printf("String1 is greater\n"));
		}
	}
	else {

		flag = str_cmp(str2, str1);
		switch(flag)
		{
			case 0 : printf("Strings are equal\n");
				break;
			case 1 : printf("string1 is less\n");
				break;
			case -1: printf("String1 is greater\n");
				break;
		}
	//(flag==0)? printf("Strings are equal\n"): ((flag == -1)? printf("string1 is greater\n") : printf("String1 is less\n"));
	}
	return 0;
}
