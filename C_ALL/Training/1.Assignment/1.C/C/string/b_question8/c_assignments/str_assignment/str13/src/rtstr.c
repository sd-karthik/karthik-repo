#include "header1.h" 

int strrot( char *str,  char *rstr)
{ 
	int j;  
    int i=0;	
	int len;
	int len2;
	int n;
    len = str_len(str);
	len2 = str_len(rstr);

	while(i < len){
		*(str+len+i) = *(str+i);
		i++;
	}
	
	*(str+len+i) = '\0'; 

n= strsp(rstr,str);
   
 if( len2 == n)
		return 1;
	else 
		return 0;
}
