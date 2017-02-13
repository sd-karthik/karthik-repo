#include"header1.h"

void main()

{
    char *str1=NULL;
	int num;
	char *n=NULL;

	
	printf("enter string for squeeze\n");
	
	if (NULL == (str1 = (char *)malloc(sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}

	if ((NULL == (fgets (str1, MAX, stdin))) || (*str1 == 10)){
		printf("enter input\n");
    	exit(0);
	}

   n = squeeze(str1);
    
 printf("str squeezed: %s\n",n);
	
	//printf("string is:%s\n",n);
}

