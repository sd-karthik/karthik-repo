# include <stdio.h>
# include <string.h>
# include <malloc.h>
#include <stdlib.h>

# define SIZE 256

int main()
{

		short int len1 = 0;                 // for first number length
		short int len2 = 0; 				// for second number length
		short int carry = 0; 				//To store the carry
		int i; 								//  loop variable
		int count = 0;						//loop variable
		short int  number1_digit; 			//first number digit in integer
		short int number2_digit; 			//second number digit in integer
		short int result1 = 0; 				//temporary result
		char temp; 
		char result[ SIZE + 1];				 //Resultant array
		char * temp_ptr; 					//temporary pointer to find length of number
		char * number1 = (char *) malloc( SIZE);	 //first number
		char * number2 = (char *) malloc( SIZE); 	//second number

		__fpurge(stdin);
		printf("Enter first number\n");

		/*To read first number*/
		fgets(number1, SIZE, stdin);
		*(number1 + strlen( number1 ) + 1) = '\0';

		__fpurge(stdin);
		/*To read second number */
		printf("Enter second number \n");

		fgets(number2, SIZE, stdin);
		*(number2 + strlen( number2 ) + 1 ) = '\0';

		/*To find the first number  length*/	
		temp_ptr = number1;
		for(; *temp_ptr != '\0'; len1++, temp_ptr++);
		/*To find the second number length*/
		temp_ptr = number2;
		for(; *temp_ptr != '\0'; len2++, temp_ptr++);
		
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
		for(i = count - 1 ; i >= 0; i--) 
				printf("%d", result[i]);

		printf("\n");
		return 0;
}
