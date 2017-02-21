#include "header1.h"


int valid(char *str)
{	
	int i;
	int res=0;
	
                                               
	for(i=0 ; i < strlen(str)-1; i++){
		if  ((*(str+i) >= '0' && *(str+i) <= '9'))
			{
		    res = (res *  10) + (*(str+i) - '0');
			}
		                                          
    }                                                    
    return res;
	
}
