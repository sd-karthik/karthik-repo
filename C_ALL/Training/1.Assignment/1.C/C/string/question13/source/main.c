#include"header.h"

void main()

{
    char *str1=NULL;
	char *str2=NULL;
	int num;
	
	
	printf("enter string1 :\n");
	
	if (NULL == (str1 = (char *)malloc(MAX*sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}

	if ((NULL == (fgets (str1, MAX, stdin))) || (*str1 == 10)){
		printf("enter input\n");
    	exit(0);
	}
	           
    if (NULL == (str2 = (char *)malloc(MAX*sizeof(char)))){                 
		printf("malloc failed\n");                                       
    	exit(0);  
	}
	
	printf("enter check string2 :\n");   
	if ((NULL == (fgets (str2, MAX, stdin))) || (*str2 == 10)){                   
        printf("enter input\n");                                                
        exit(0);                                                                
    }	
	
    num = strrot(str1,str2);
	
	
	if (num == 1)
		printf("str2 is rotated string of string1\n");
	else if(num == 0)
		printf("str2 not a rotated string of string1\n");

    
}

