#include "header1.h" 

int strsp(char *sbu, char *dbu)
{ 
	int j=0;  
    int i=0;	


	while( (*(dbu+j+1) != '\0') && (*(sbu+i+1) != '\0')){
			if(*(sbu+i) == *(dbu+j)){
			i++;
			j++;
			}
			else{
				j++;
				if(i != 0){
				j = (j-i);
				i=0;
				}
			}
		}

	return i; 

}
