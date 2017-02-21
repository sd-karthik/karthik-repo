# include <stdio.h>
# include <string.h>
# include <malloc.h>
#include <stdlib.h>

# define SIZE 256

int main()
{

		short int len1 = 0;
		short int len2 = 0;
		short int temp_len1;
		short int barrow = 0;
		short int carry = 0;
		short int temp_result = 0;
		short int temp_carry = 0;

		int i = 0;
		int j = 0;
		int k;
		int temp_len = 0;
		char flag  = 0;

		int count = 0;
		short int  number1_digit;
		short int number2_digit;
		short int result1 = 0;
		char temp;
		char * temp_ptr;
		char result[ SIZE + 1] = {0};
		char temp_result1[SIZE+1] = {0};
		char * number1 = NULL ;
		char * number2 = NULL;
		
		if ((number1 = (char *) malloc( SIZE)) == NULL) {
				perror("malloc error\n");
				exit(2);
		}

		if((number2 = (char *) malloc( SIZE)) == NULL) {
				perror("malloc error\n");
				exit(2);
		}

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
		temp_len1 = len1;

		temp_ptr = number2;
		for(; *temp_ptr != '\0'; len2++, temp_ptr++);

		j = 0;
		while(*(number2 + len2 -1)) {

				i = j;
				temp = *(number2 + len2 - 2);

				if(temp >= '0' && temp <= '9') {
						number2_digit = temp - 48;
				}else {
						number2_digit = 0;
				}
				temp_len1 = len1;
				while(*(number1 + temp_len1 - 1) ) {

						temp  = *(number1 + temp_len1 - 2 ) ;

						/*Converting character to integer*/

						if(temp >= '0' && temp <= '9') {
								number1_digit = temp - 48 ;
						} else {
								number1_digit = 0;
						}


						temp_result = (number1_digit * number2_digit) + carry;

						carry = temp_result / 10;
						temp_result1[i] = temp_result % 10;


						temp_len1 --;
						i++;

				}
				for(k = j; k <= i; k++) {
						temp_result = result[k] + temp_result1[k] + temp_carry;
						temp_carry = temp_result / 10;
						result[k] = temp_result % 10;
				}

				len2 --;
				j++;
		}
		if((*(number1 + 0) == '-') != ( *(number2 + 0) == '-'))
				printf("-");
		
		for(i = k ; i >= 0; i--) 
				printf("%d", result[i]);
		printf("\n");

		return 0;
}
