//Sandeeep S K
//to copy n characters from character buffer sbuf to character buffer dbuf.
#include"header1.h"

void main()

{
	char n[MAX];
	unsigned int num;
	char *sbu=NULL;//source string
	char *dbu=NULL;//destination string
		
	printf("enter string\n");
	
	
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
	
	printf("NUMBER OF CHARACTERS:\n");
	fgets(n, MAX, stdin);

	num = valid(n); //invoke validation function
	copy_n(sbu,dbu,num);//invoke function to copy n characters
	
	printf("string is:%s\n",dbu);

	
}

