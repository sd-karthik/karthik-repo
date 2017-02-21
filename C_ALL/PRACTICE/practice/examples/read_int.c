/*function to read integer value*/
#include"header.h"

int read_int()
{
	
	char *ptr;
	double  number;
	int valid_number;
	int  valid;
	int i ,j, flag;
	ptr=(char *) malloc ( 1000 );
	do{
		 i = 0; 
		 flag = 0;
		valid =1;
		number=0;
		fgets(ptr , 1000,stdin);
		__fpurge(stdin);
		*( ptr + ( mystrlen(ptr) - 1) ) = '\0';
		
		while(CHAR == ' '|| CHAR == '\t') {	// skip starting spaces,tabs
			i++;
		}
	
		if(CHAR == '-' || CHAR == '+'){			//To check number is negative or not 
			if(CHAR == '-')
				flag=1;
			i++;
		}

		if(*(ptr+i+1) == ' ' ||*(ptr+i+1) == '\t' || *(ptr+i+1) == '\n')
			valid=0;
	
		for(j=mystrlen(ptr)-1 ; j >= 0 ; j--){
			if(*(ptr+j)!=' '&& *( ptr + j) != '\t')
				break;
			*(ptr + j)='\0';
		}
		
		while(CHAR) {
	        	 if(( CHAR < '0') || (CHAR > '9')) {	
				valid=0;
				break;
			}		
			else	
				number = number * 10 + VALUE;
			i++;
		 }	
		
		if(number < INT_MIN || number > INT_MAX){
			printf("Out of integer range \n");
			valid=0;
		}		
		else
			valid_number=(int)number;
		if(flag == 1)
			valid_number = ~valid_number + 1;

		if(valid == 0)
			printf("Invalid number enter the number again\n");
	
	}while(valid==0);
	
	return valid_number;

}
