#include "header1.h"


void copy_n(char *sbu,char *dbu, int n)                                         

{                                                                               
    while(n){                                                                   
        n--;                                                                    
        *dbu++ = *sbu++;                                                        
    }                                                                           
    *dbu = '\0';                                                                
}                                                                               
                                                                                
                    
