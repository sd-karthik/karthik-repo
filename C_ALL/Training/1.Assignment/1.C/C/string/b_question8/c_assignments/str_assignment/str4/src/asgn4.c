//to append string str1 to string str2.

#include"header1.h"

void main()

{
    char *sbu=NULL;//string 1 
	char *dbu=NULL;//string 2
	char *n=NULL;//appended string
	
	printf("enter string1 :\n");
	
	
	if (NULL == (sbu = (char *)malloc(sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}
	if ((NULL == (fgets (sbu, MAX, stdin))) || (*sbu == 10)){
		printf("enter input\n");
    	exit(0);
	}	
	if (NULL == (dbu = (char *)malloc(sizeof(char)))){                                                                           
    	printf("malloc failed\n");                                                  
    	exit(0);  
	}
	
	printf("enter string 2:\n");   
	if ((NULL == (fgets (dbu, MAX, stdin))) || (*dbu == 10)){                   
        printf("enter input\n");                                                
        exit(0);                                                                
    }                         
	
    n = str_cat(sbu,dbu);// invoke cancatenate function
	
	printf("string is:%s\n",n);

	
}

