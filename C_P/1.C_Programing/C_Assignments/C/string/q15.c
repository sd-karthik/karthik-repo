#include<stdio.h>
#include<stdlib.h>
#define MAX 200

int str_len(char *str)
{
	int i;

	for(i = 0; *str; *str++, i++);
	return i;
}

int validate(char* num)
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

	for(i = 1; i < str_len(num)-1; i++) {

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

char *insertchar(char *str, const char ch, int pos)
{
	int i;
	
	for(i = str_len(str)-1; i >= pos; i--)	{

		str[i+1] = str[i];
	}
		str[pos]= ch;
	return str;
}

void main()
{
	char *str;
	int pos;
	char *ip;
	char ch;
	char *p;
	
	str=(char *) malloc(sizeof(char)* MAX);

	printf("Enter a string\n");
	fgets(str, MAX, stdin);

	printf("Enter the position for the character to input\n");
	fgets(p, MAX,stdin);
	
	printf("Enter the char to input\n");
	ch=fgetc(stdin);

	
	pos=atoi(p);
 	
	ip = insertchar(str, ch, pos);

	printf("The output string is:\n");
	fputs(str, stdout);

}


