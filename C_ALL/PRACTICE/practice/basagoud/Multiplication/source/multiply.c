/*
 * multiplication of two long numbers 10 to 256 degits
 * 
 */
#include "header.h"

void multiplication()
{
	short int num1_length;
	short int num2_length;
	short int index = 0;
	short int i;
	short int j ;
	short int  carray = 0;	

	char *number1 = NULL;	/*storing number1*/
	char *number2 = NULL;	/*storing number2*/
	char *result = NULL;	/*storing result*/

	struct flag_bits flag_bit_obj;

	/*reading first number*/
	do {
 		printf ("Enter first number\n");
		flag_bit_obj.valid ^= 2;	/*clearing valid bit*/
		number1 = read_number();	/*read number1*/
		flag_bit_obj.valid =  number_validation(number1);	/*set valid bit*/
	} while (!(flag_bit_obj.valid == 1)); 

	/*calculate length */
	num1_length = strlen(number1);

	/*checking sign*/
	if (*(number1) == '+' || *(number1) == '-' ) {
		if (*(number1) == '-' )
			flag_bit_obj.sign ^= 1;		/*set sign bit*/
		number1++;
		num1_length--;
	}

	/*reading second number*/
	do {
 		printf ("Enter second number\n");
		flag_bit_obj.valid ^= 2; 	/*clearing valid bit*/
		number2 = read_number();	/*read number2*/
		flag_bit_obj.valid = number_validation(number2);	/*set valid bit*/
	} while (!(flag_bit_obj.valid == 1)); 
	
	/*calculate length*/
	num2_length = strlen(number2);

	/*checking sign*/
	if (number2[0] == '+' || number2[0] == '-') {
		if (number2[0] == '-')
			flag_bit_obj.sign ^= 1;		/*set/clear sign bit*/
		number2++;
		num2_length--;
	}

	if(!(num1_length) || !(num2_length)) {
			printf("Syntax error\n");
			return ;
	}
#if 1	
	/*checking the given number1 is zero or not*/
	for (index = 0; number1[index] == '0'; index++) 
	;
	if (number1[index] == '\0') {
		printf ("Result==> 0\n");
		return;
	}
		
	/*checking the given number2 is zero or not*/
	for (index = 0; number2[index] == '0'; index++)
	;
	if (number2[index] == '\0') {
		printf ("Result==> 0\n");
		return;
	}
#endif
	/*allocating memory for result*/
	if ( NULL == (result = (char *)malloc((num1_length + num2_length + 1)))) {
		perror("malloc");
		exit (3);
	}

#if 1	
/*
 * multipliction operation
 */
	for (index = (num2_length -1); index >= 0 ; index--) {
		for (j = (num1_length -1 ); j >= 0; j--) {	/*multiplying and storing into result*/	
			result[index + j] =  result [index + j] \
					+ (number1[j] - 48) * (number2 [index] - 48);
 			}
	/*Checking result and forwarding carray to next iteration*/
		for ( i = ((num1_length + index ) +1); i > 0; i--) {
			if (result[i] >= 10) {
				carray = (result[ i]) / 10;	
				result[i] = (result[i]) % 10; /*adding reminder*/
				result[i - 1] = result[i - 1] + carray; /*adding carray */
			}
		}
	}
#endif
	printf ("Result==> ");

	/*To remove leading zeros*/
	for(index = 0; result[index] == 0; index++) ;

	/*printing result*/
	if (0 == flag_bit_obj.sign)
		printf ("-");
	for ( ; index <= ((num1_length + num2_length) - 2) ; index++)
			printf ("%d", result[index]);
	printf ("\n");
}

