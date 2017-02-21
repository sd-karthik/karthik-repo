# include <stdio.h>
# include <string.h>
# include <malloc.h>
#include <stdlib.h>

# define SIZE 256

int main()
{

		short int len1 = 0;
		short int len2 = 0;
		short int barrow = 0;
		int i = 0;
		int temp_len = 0;
		char flag  = 0;

		int count = 0;
		short int  number1_digit;
		short int number2_digit;
		short int result1 = 0;
		char temp;
		char * temp_ptr;
		char result[ SIZE + 1];
		char * number1 = (char *) malloc( SIZE);
		char * number2 = (char *) malloc( SIZE);

		__fpurge(stdin);
		printf("Enter first number\n");


		fgets(number1, SIZE, stdin);
		*(number1 + strlen( number1 ) + 1) = '\0';


		__fpurge(stdin);
		printf("Enter second number \n");
		
		fgets(number2, SIZE, stdin);
		*(number2 + strlen( number2 ) + 1 ) = '\0';
		
		temp_ptr = number1;
		for(;*temp_ptr != '\0';len1 ++, temp_ptr++);
			
		temp_ptr = number2;

		for(; *temp_ptr != '\0'; len2++, temp_ptr++);
		printf("SUBSTRACTION RESULT ==> "); 
		if(len2 >= len1){
				
				if(len1 == len2) {
						temp_len = len1 - 1;
						while(temp_len) {
								while(*(number2 + i) > *(number1 + i)){
										flag = '1';
										break;
								}
								if(flag == '1') {
										break;
								}
								
								i++;
								temp_len--;
						}
				}
				if((len2 > len1) || (flag == '1') ) {
						temp_ptr = number1;
						number1 = number2;
						number2 = temp_ptr;
						len1 += len2;
						len2  = len1 - len2;
						len1 = len1 - len2;
						printf("-");
				}
		}
		
		while(*( number1 + len1 - 1) || *( number2 + len2 -1 ))
		{

				temp  = *(number1 + len1 - 2 ) ;

				if(temp >= '0' && temp <= '9') {
						number1_digit = temp - 48 ;//atoi( &temp );
				} else {
						number1_digit = 0;
				}
				temp = *(number2 + len2 - 2);

				if(temp >= '0' && temp <= '9') {
						number2_digit = temp - 48;//atoi( &temp );
				}else {
						number2_digit = 0;
				}

				if(number1_digit < (number2_digit + barrow)) {
						result1 = (10 + number1_digit) - (number2_digit + barrow);
						barrow = 1;
				} else {
						result1 = number1_digit - (number2_digit + barrow);
						barrow = 0;
				}
			
				result[ count ++] = result1;

				len1 --;
				len2 --;

		}

		for(i = count - 2 ; i >= 0; i--) 
				printf("%d", result[i]);

		printf("\n");
		return 0;
}
