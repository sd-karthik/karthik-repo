# include <stdio.h>
# include <string.h>
# include <malloc.h>
#include <stdlib.h>
# define SIZE 30

int main()
{

		int len1 = 0;
		int len2 = 0;
		int i = 1;
		char  choice;
		short int carry = 0;
		 int number1_digit;
		 int number2_digit;
		 int result = 0;
		 int result1 = 0;
		char * number1 = (char *) malloc(SIZE);
		char * number2 = (char *)malloc(SIZE);

		__fpurge(stdin);
		printf("Enter first number\n");


		fgets(number1, SIZE, stdin);
		*(number1 + strlen(number1) + 1) = '\0';


		__fpurge(stdin);
		printf("Enter second number \n");
		
		fgets(number2, SIZE, stdin);
		*(number2 + strlen(number2) + 1 ) = '\0';

		printf("Enter your choice\n");
		scanf("%c", &choice);
		switch(choice) {
				case '1':printf("ADDITION\n");
						len1 = strlen(number1);
					   len2 = strlen(number2);
//					   printf("length ==> %d\n", len);
					   while(*(number1 + len1 - 1) ||*(number2 + len2 -1 ))
					   {
								 if((number1_digit =(atoi (number1 + len1 - 2)) )) {
										 number1_digit = number1_digit / i;
								 }
								 if ((number2_digit =(atoi (number2 + len2 - 2)))) {
										 number2_digit = number2_digit /i;
								 }
								 result1 = number1_digit + number2_digit + carry;

								 result  += (result1 % 10)*i ;
								 if(result1 >= 10) {
										 carry = result1 / 10;
								 } else {
										 carry = 0;
								 }

//								 number1 = (number1)/10;
//								 number2 = (number2)/10;
							   len1 --;
							   len2 --;
							   i *= 10;
							   
					   }
				
						printf("%d\n", result);
					   break;
				case '2':printf("SUBSTRACTION\n");
					   break;
				case '3': printf("MULTIPLICATION\n");
						break;
				default:printf("Enter correct choice\n");
						break;
		}

		printf("%s\n", number1);

		printf("%s\n", number2);

		return 0;
}
