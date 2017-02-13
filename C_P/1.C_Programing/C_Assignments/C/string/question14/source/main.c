//main.c

//Program to remove substring

#include"header.h"

void main()

{
    char *sbu=NULL;
	char *dbu=NULL;
	char *n=NULL;
	int num;
	
	printf("Enter string1 :\n");
	
	
	if (NULL == (sbu = (char *)malloc(MAX*sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}
	if ((NULL == (fgets (sbu, MAX, stdin))) || (*sbu == 10)){
		printf("enter input\n");
    	exit(0);
	}	
	if (NULL == (dbu = (char *)malloc(MAX*sizeof(char)))){                                                                           
    	printf("malloc failed\n");                                                  
    	exit(0);  
	}
	
	printf("Enter string 2:\n");   
	if ((NULL == (fgets (dbu, MAX, stdin))) || (*dbu == 10)){                   
        printf("enter input\n");                                                
        exit(0);                                                                
        } 
	
	num = strsp(dbu,sbu);
    
	if(num != str_len(dbu))
        printf("string is :%s",sbu);   
   	else
	{
        n = rmstr(sbu,dbu);
	printf("resulting string is:%s\n",n);
        }
	
}

