#include "header1.h"


char lower(char *sbu)
{   
	int i=0;
 	char *n; 
	n = sbu;
	int l1;
	l1 = str_len(sbu);
	printf("len: %d\n",l1);
	while (*sbu != '\0' && i < l1 ){                                                   
            if(*sbu >= 'a' && *sbu <='z'){                                      
                *sbu++;                                                       
            }                                                                   
            else{                                                               
               *sbu =  *sbu + 32;                                                      
                *sbu++;                                                         
            } i++;
	}            
return 0;
}
