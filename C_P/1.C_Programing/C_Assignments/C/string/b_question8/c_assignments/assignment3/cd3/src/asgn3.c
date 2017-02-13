#include"header1.h"

# define MAX 30

int main (int argc, char *argv[])
{
	int n1;
	int n2;
	char *str1=NULL;
    char *str2=NULL;
	char *oper=argv[1];	
	
	
	   	
	str1 = (char *)malloc(MAX*sizeof(char));
	str2 = (char *)malloc(MAX*sizeof(char));


	str1 = argv[2];
	str2 = argv[3]; 
	
	n1 =  atoi(str1);
	n2 =  atoi(str2);

	
    void (*fptr)(int a ,int b) ;
	
	if (strcmp(oper,"add") == 0)
		fptr = add;	
	

	else if (strcmp(oper,"sub") == 0)
		fptr = sub;	
	
	else if (strcmp(oper,"mul") == 0)
		fptr = mul;	


	else if (strcmp(oper,"divide") == 0)
		fptr = divide;
	else 
		printf("invalid inpiut\n");	
	
	fptr (n1,n2);

}

void add (int a , int b)
{
	printf("sum = %d",(a+b));
}

void sub (int a , int b)
{
	printf("diff = %d",(a-b));
}

void mul (int a ,int b)
{
	printf("pro = %d\n",(a*b));
}

void divide (int a , int b)
{
	printf("div =  %d\n",(a/b));
}
