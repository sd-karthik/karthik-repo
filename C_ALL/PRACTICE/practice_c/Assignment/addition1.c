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
		short int carry = 0;
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

	
		if((*(number1 + 0) == '-') == ( *(number2 + 0) == '-')) {
				/*Adding the number digit by digit*/

				while(*(number1 + len1 - 1) || *(number2 + len2 - 1))
				{

						temp  = *(number1 + len1 - 2 ) ;
						/*Converting character to integer*/

						if(temp >= '0' && temp <= '9') {
								number1_digit = temp - 48 ;
						} else {
								number1_digit = 0;
						}
						temp = *(number2 + len2 - 2);

						if(temp >= '0' && temp <= '9') {
								number2_digit = temp - 48;
						}else {
								number2_digit = 0;
						}


						/*Adding the digits and carry*/
						result1 = number1_digit + number2_digit + carry;

						carry = result1 / 10;
						result1 = result1 % 10;

						result[count++] = result1;

						len1 --;
						len2 --;

				}

				printf("RESULT ==> ");
				if( ((*number2 + 0) == '+') || (*(number1 + 0) == '-')) {
					printf("-");
				}
				for(i = count - 1 ; i >= 0; i--) 
						printf("%d", result[i]);
		}else {

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
				printf("RESULT ==> ");
				
				if((*(number2 + 0) != '-' && *(number1 + 0) != '-' )) {
						printf("-");
				}
				while(result[--count] == 0)
						continue;
				for(i = count - 2 ; i >= 0; i--) 
						printf("%d", result[i]);
		}
		printf("\n");
		return 0;
}
