#include"header1.h"

void main()

{
    char *str1=NULL;
	int pos;
	char num[MAX];
	char *n=NULL;
	char ch;
	
	printf("enter string for insertion\n");
	
	if (NULL == (str1 = (char *)malloc(sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}
	
	 if (NULL == (n = (char *)malloc(sizeof(char)))){                         
        printf("malloc failed\n");                                              
        exit(0);                                                                
    }   

	if ((NULL == (fgets (str1, MAX, stdin))) || (*str1 == 10)){
		printf("enter input\n");
    	exit(0);
	}
	
	printf("enter position of insertion\n");
	if ((NULL == (fgets (num, MAX, stdin)))){                 
        printf("enter input\n");                                                
        exit(0);                                                                
    }             
	pos = valid(num);
	
	printf("character to be inserted\n");
	
    ch = getchar();	


    
	n = inse(str1,ch,pos);
  
    printf("str with character inserted: %s\n",n);
	
	//printf("string is:%s\n",n);


}

