//ASCII to integer conversion program

#include<stdio.h>
#include<stdlib.h>

#define RED "\x1b[31m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

#define MAX 100	//Maximum size as 100

int main(void)
{
	int num;	//number to store as integer after conversion
	char *cnum;	//input using fgets

	cnum = (char *) malloc (sizeof(char)* MAX);
	printf(BLUE "---------------------------------------\n" RESET);
	printf(RED "Enter a number\n" );
	fgets(cnum, MAX, stdin);
	
	num = valid(cnum);
	printf(RED "num=%d\n" RESET, num);
	printf(BLUE "__________________________________________\n" RESET);
	return 0;
}

int str_len(char str[])
{
	int i;

	for(i = 0; str[i]; i++);
	return i;
}

int valid(char s[30])
{	int i;
	char n[30];
	int res=0;
	int flag;
	int t=0;
	flag=2;
    if (s[0] == '+'){
		t++;
		flag = 1;
	}                                                       
    if (s[0] == '-')
	{
	t++;
	flag=0;	
	}      
	for(i=t ; i < str_len(s)-1; i++){
		if  ((s[i] >= '0' && s[i] <= '9'))
			{
		    res = (res *  10) + (s[i] - '0');
			}
		else
			{
			printf("invalid input\nTry the valid number again\n");
			fgets(n,MAX,stdin);
			res=valid(n);
			return res;
			}
		}
	(flag == 1)?( res = res) : (flag == 0) ? (res = (~res)+1) : (flag=2);
	if(res >= -214745682 &&  res <= 214745681)
	return res;
	else 
	{
	printf("input  out of range \n");
    fgets(n,50,stdin);                                                  
    res=valid(n);                                                       
    return res;
	}
}



