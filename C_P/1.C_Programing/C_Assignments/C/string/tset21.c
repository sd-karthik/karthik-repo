#include<stdio.h>
void str_rev(char* str)
{
	int *temp;
	temp= (char*) malloc(sizeof(char)*100);
	temp =str;
	int n =strlen(str) -1;
	while(*str)
	{
		*str =*(temp +n);
			n--;
		*str++;
	}
	*str = '\0';
	printf("%s\n",str);
}
/*int validate(char* num)
{
	int i;
	int n;
	int flag=0;
	n = 0;

	if(num[0]=='+') {
		flag=0;
	}

	else if(num[0]=='-') {
		flag=1;
	}

	else if((num[0] >= '0') && (num[0] <= '9')){ 
			n = n * 10 + num[0] - '0';
		}	

	for(i = 1; i < strlen(num)-1; i++) {

		if ((num[i] >= '0') && (num[i] <= '9')) 
			{
				n = n * 10 + (num[i] - '0');
			}

		 else {
			printf("\nInvalid input!\nTry again\n");	
			exit(0);
		}
	}	

	if(n >= 2147483647 || n <= -2147483648)
	{
		printf("Outof Range!!\n Try again\n");
	} else {

		if (flag) {
			return (~(n) + 1);
		} 

		else {
		return n;
		}
	}
}
*/
int str_len(char *str)
{
	int i;

	for(i = 0; *str; *str++, i++);
	return i;
}
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
	
	str_rev(str1);

	printf("\nReversed String\n");
	fputs(str2, stdout);

	return 0;
}
