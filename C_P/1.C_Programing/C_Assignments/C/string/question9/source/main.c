//main.c

//Program for stringtoken

#include "header.h"

void main()

{
    char *buf1=NULL;
	char *buf2=NULL;
	int j;		
	char *token=NULL;
	int len1,m,n=0;	
//	char *buf=NULL;

	printf("enter string :\n");
	
	if (NULL == (buf1 = (char *)malloc(MAX*sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}

	if (NULL == (token = (char *)malloc(MAX*sizeof(char)))){                         
        printf("malloc failed\n");                                              
        exit(0);                                                                
    }

	if ((NULL == (fgets (buf1, MAX, stdin))) || (*buf1 == 10)){
		printf("enter input\n");
    	exit(0);
	}
	           
    if (NULL == (buf2 = (char *)malloc(sizeof(char)))){                 
		printf("malloc failed\n");                                       
    	exit(0);  
	}
	
	printf("enter delimiters:\n");   
	if ((NULL == (fgets (buf2, MAX, stdin))) || (*buf2 == 10)){                   
        printf("enter input\n");                                                
        exit(0);                                                                
    }	
	
	len1 = str_len(buf1);
	
	while (*buf1 !='\0'){
    	token = strto((buf1),buf2);
		printf("%s\n",token);
		buf1 = buf1 + str_len(token)+2;
		}
}
