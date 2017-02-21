#include "header1.h" 

int strsp(char *sbu, char *dbu)
{ 
	int j=0;  
    int i=0;	
printf ("%s:sbu",sbu);	
	while( *(sbu+j+1)!='\0' && *(dbu+i+1)!='\0'){
			if((*(dbu+i) == *(sbu+j)) ){
				j=0;
				i++;
				}
			else {
				j++;
			}
			
	}		
	return i; 

}
