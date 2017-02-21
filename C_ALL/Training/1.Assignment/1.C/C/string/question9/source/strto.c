#include "header.h"

char *strto(const char *buf1, const char *buf2)
{
	
	int i;
	int j;                                 
	int k=0;
	char *buf=NULL;
	if (NULL == (buf = (char *)malloc(sizeof(char)))){                          
        printf("malloc failed\n");                                              
        exit(0);                                                                
    }  
	for(i=0; *(buf1+i) != '\0'; i++ ){
		for(j=0; *(buf2+j) != '\0'; j++){
			if (*(buf2+j) == *(buf1+i)){
				*(buf+k) = '\0';
				return buf;	
				}
		}	
	
		*(buf+k) = *(buf1+i);
		

	//printf("%s\n",buf); 
	k++;
	 
	}
}












