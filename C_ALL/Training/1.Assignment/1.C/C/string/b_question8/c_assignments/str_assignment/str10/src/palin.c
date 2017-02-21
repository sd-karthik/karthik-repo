#include "header1.h"


int palin(char *str1 , int len)
{	
	int i=0;

	int flag=2;
		while(i < len){                                                         
        if(*(str1+i) == *(str1+len-1))                                            
            flag = 1;                                                           
        else                                                                    
        {                                                                       
            flag = 0;                                                           
            break;                                                              
        }                                                                       
        len--;                                                                  
        i++;                                                                    
        }
	return flag;
}    
