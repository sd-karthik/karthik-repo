//main.c

//Program of strcpn

//DOC:08/12/16

#include"header.h"

void main()

{
    char *str1=NULL;
	char *str2=NULL;
	int num;
	
	
	printf("enter string to  compare:\n");
	
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
	
	printf("enter given string :\n");   
	if ((NULL == (fgets (str2, MAX, stdin))) || (*str2 == 10)){   
        printf("enter input\n");                       
        exit(0);                       
    }	
	
	num = strsp(str1,str2);
	 printf("count= %d\n",num);
    
}

