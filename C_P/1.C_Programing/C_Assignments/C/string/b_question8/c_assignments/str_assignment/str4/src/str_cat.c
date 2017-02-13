#include "header1.h"

char *str_cat (char *sbu, char *dbu)
{ 
  	int  i=0;
	while (*(sbu+i) != '\0'){
		i++;	
		}
	
	while(*dbu != '\0'){
		*(sbu+i-1) = *dbu++;
	    i++;	
		}
		
	*(sbu+i) ='\0';
	return sbu;
}
