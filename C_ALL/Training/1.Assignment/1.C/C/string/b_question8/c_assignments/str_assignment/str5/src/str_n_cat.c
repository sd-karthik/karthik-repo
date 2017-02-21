#include "header1.h"

char *str_n_cat (char *sbu, char *dbu,int num)
{ 
  	int  i=0;
	while (*(sbu+i) != '\0'){
		i++;	
		}
	
	while((*dbu != '\0') && (num > 0) ){
		*(sbu+i-1) = *dbu++;
	    i++;
		num--;	
		}
		
	*(sbu+i) ='\0';
	return sbu;
}
