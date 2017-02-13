//to copy the string from sbuf to character buffer dbuf.
#include"header1.h"

int main()

{
	char *sbu;//source string
	char *dbu;//destination string

	if (NULL == (sbu = (char *)malloc(MAX*sizeof(char)))){
	printf("malloc failed\n");
	exit(0);
	}
                                                                                
    if (NULL == (dbu = (char *)malloc(MAX*sizeof(char)))){
	printf("malloc failed\n");                                  
    exit(0);  
	}

	if ((NULL == (fgets (sbu, MAX, stdin))) || (*sbu == 10)){
		printf("enter input\n");
    	main();	
	}	
	else{	
			str_cpy(sbu, dbu);//invoke copy function
			printf("%s",dbu);
	}
}


