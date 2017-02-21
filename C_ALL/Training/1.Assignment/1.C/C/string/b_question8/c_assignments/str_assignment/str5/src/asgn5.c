//to append first n characters of string str1 to string str2.
#include"header1.h"

void main()

{
    char *sbu=NULL;//source string
	char *dbu=NULL;//destination string
	char *n=NULL;
	char nu[MAX];
	unsigned int num;
	
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
    
	printf("enter number of charcters:\n");                                     
    if ((NULL == (fgets (nu, MAX, stdin))) || (*sbu == 10)){                    
        printf("enter input\n");                                                
        exit(0);                                                                
    }                                                                           
    num = valid (nu);//validation function
	
    n = str_n_cat(sbu,dbu,num);//to cancatenate n characters
	
	printf("string is:%s\n",n);

	
}

