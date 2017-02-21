#include"header1.h"

void main()

{
    char *str1=NULL;
	int num;

	int len;
	
	printf("enter string for palindrome cmp:\n");
	
	if (NULL == (str1 = (char *)malloc(sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}

	if ((NULL == (fgets (str1, MAX, stdin))) || (*str1 == 10)){
		printf("enter input\n");
    	exit(0);
	}
	 
	len = str_len(str1);  
	printf("len:%d\n",len);	
	num =  palin(str1,len);

    if (num == 1)
		printf("str is palindrome \n");
	else 		
		printf(" str is not palindrome\n");
//	printf("string is:%s\n",n);
}

