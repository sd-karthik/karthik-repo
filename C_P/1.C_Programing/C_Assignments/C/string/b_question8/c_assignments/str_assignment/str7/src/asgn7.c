#include"header1.h"

void main()

{
    char *str1=NULL;
	char *str2=NULL;
	unsigned int num;
	int l1;
	int l2;
	
	printf("enter string1 for case insensitive comp:\n");
	
	if (NULL == (str1 = (char *)malloc(sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}

	if ((NULL == (fgets (str1, MAX, stdin))) || (*str1 == 10)){
		printf("enter input\n");
    	exit(0);
	}
	           
    if (NULL == (str2 = (char *)malloc(sizeof(char)))){                 
		printf("malloc failed\n");                                       
    	exit(0);  
	}
	
	printf("enter string 2 for case insensitive compare:\n");   
	if ((NULL == (fgets (str2, MAX, stdin))) || (*str2 == 10)){                   
        printf("enter input\n");                                                
        exit(0);                                                                
    }	

	
	lower(str1);

	lower(str2);
	
	printf("%s\n",str1); 
	printf("%s\n",str2);

	num = str_cmp(str1,str2);
	  
    if (num == 1)
		printf("%d :str 1 greater than str2\n",num);
	else if (num == 0)
		printf("%d :str 1 and 2 are equal\n",num);
	else if(num == -1)
		printf("%d str2 greater than str1\n",num);
//	printf("string is:%s\n",n);
}
