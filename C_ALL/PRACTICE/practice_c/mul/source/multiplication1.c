
#include "header.h"

void multiplication(char * number1, char *  number2)
{
		/*variables to hold the length of numbers*/

		short int len_number1 = 0;
		short int len_number2 = 0;
		short int temp_len1;
		
		int carry = 0;

		/*loop variables*/
		short int i = 0;
		short int j = 0;
		short int k = 0;

		/*variables to hold the digits*/
		char  number1_digit = 0;
		char  number2_digit = 0;
		/*temporary variables*/
		char temp = 0;
		unsigned char * temp_ptr = NULL;

		/*variable to store*/
		unsigned char * result = NULL;	
		
		__fpurge(stdin);
		printf("Enter first number\n");

		/*Reading first number*/
		fgets(number1, SIZE, stdin);

		len_number1 = mystrlen(number1);
		*(number1 + len_number1  - 1) = '\0';
		len_number1--;

		__fpurge(stdin);
		printf("Enter second number \n");

		/*Reading second number*/
		fgets(number2, SIZE, stdin);
		len_number2 = mystrlen(number2);
		*(number2 + len_number2 - 1 ) = '\0';
		len_number2--;

		/*checking for numbers has digits or not*/
		if ((len_number1 == 0) || (len_number2 == 0)) {
				printf("Result ==> 0\n");
				return ;
		}

		/*allocating memory for result variable*/
		if(NULL == (result = (unsigned char *) malloc ( len_number1 + len_number2 + 1))) { 
				perror("Malloc error\n");
				exit(2);
		}

		if(NULL == (temp_ptr = (unsigned char *)malloc (len_number1 + 1 ))) {
				perror("malloc error\n");
				exit(2);
		}

		j = 0;
		temp_len1 = len_number1;
		while(( len_number2)) {

				i = j;
				/*converting character to integer*/
				temp = *(number2 + len_number2 - 1);

				if(temp >= '0' && temp <= '9') {
						number2_digit = temp - 48;
				}else {
						number2_digit = 0;
				}
				carry = 0;	
				temp_len1 = len_number1;
				while(temp_len1 + 1 ) {

					temp  = *(number1 + temp_len1 - 1 ) ;

						/*Converting character to integer*/
						if(temp >= '0' && temp <= '9') {
								number1_digit = temp - 48 ;
						} else {
								number1_digit = 0;
						}
						temp = number1_digit * number2_digit + carry;
						carry = temp / 10; /*storing carry*/ 
						*(temp_ptr + i ) = temp % 10; /*storing reminder in temp result*/
						temp_len1 --;
						i++;
				}
				carry = 0;
				/*Adding the temporary result to Result variable*/
				for(k = j; k < i ; k++) {
						*(result + k) = *(result + k) + *(temp_ptr + k) + carry;
						carry = *(result + k) / 10;	
						*(result + k) = *(result + k) % 10;
				}
				len_number2 --;
				j++;
		}

		i = 0;
		/*To remove leading zeros*/
		while(*(result + i) == 0) {
				i++;
				continue;
		}

		temp_len1 = (strlen(number1) + strlen(number2) + 1);
		/*check If all the digits are zero or not*/
		if(i > temp_len1){
				printf("RESULT ==> 0\n");
				return ;
		}
		temp = 1;
		/*checking for sign bits*/
		if(*(number1 + 0) == '-') {
				temp *= -1;
		}
		if(*(number2 + 0 ) == '-') {
				temp *= -1;
		}
		
		/*printing the result */
		printf("RESULT ===> ");
		if(temp == -1)
				printf("-");
		for(k = temp_len1 - i - 2  ; k >= 0; k--){ 
				printf("%d", *(result + k));
		}
		printf("\n");

		return ;
}
