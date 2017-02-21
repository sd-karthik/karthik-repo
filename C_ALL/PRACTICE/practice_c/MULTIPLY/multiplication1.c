# include <stdio.h>
# include <stdio_ext.h>
# include <string.h>
# include <malloc.h>
#include <stdlib.h>

# define SIZE 258

int main()
{

		short int len_number1 = 0;
		short int len_number2 = 0;
		short int temp_len1;
		int carry = 0;
		char flag = 1;
		short int i = 0;
		short int j = 0;
		short int k = 0;

		char  number1_digit;
		char  number2_digit;
		char temp;
		unsigned char * temp_ptr = NULL;
		unsigned char * result = NULL;
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
		len_number1 = strlen(number1);
		*(number1 + len_number1  - 1) = '\0';
		len_number1--;

		__fpurge(stdin);
		printf("Enter second number \n");

		fgets(number2, SIZE, stdin);
		len_number2 = strlen(number2);
		*(number2 + len_number2 - 1 ) = '\0';
		len_number2--;

		/*checking for numbers has digits or not*/
		if ((len_number1 == 0) || (len_number2 == 0)) {
				printf("Result ==> 0\n");
				return 0;
		}
			if(NULL == (result = (unsigned char *) malloc ( len_number1 + len_number2 + 1))) { 
				perror("Malloc error\n");
				exit(2);
		}

		temp_ptr = NULL;
		if(NULL == (temp_ptr = (unsigned char *)malloc (len_number1 + 1 ))) {
				perror("malloc error\n");
				exit(2);
		}

		j = 0;
		temp_len1 = len_number1;
		while(( len_number2)) {

				i = j;
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

						carry = temp / 10;

						*(temp_ptr + i ) = temp % 10;

						temp_len1 --;
						i++;
				}
				for(k = j; k < i ; k++) {
						*(result + k) = *(result + k) + *(temp_ptr + k) + carry;
						carry = *(result + k) / 10;	
						*(result + k) = *(result + k) % 10;
				}
				len_number2 --;
				j++;
		}

		i = 0;
		while(*(result + i) == 0) {
				i++;
				continue;
		}

		temp_len1 = (strlen(number1) + strlen(number2) + 1);
		if(i > temp_len1){
				printf("RESULT ==> 0\n");
				return 0;
		}
	
		if(*(number1 + 0) == '-') {
				flag *= -1;
		}
		if(*(number2 + 0 ) == '-') {
				flag *= -1;
		}

		printf("RESULT ===> ");
		if(flag == -1)
				printf("-");
		for(k = temp_len1 - i - 2  ; k >= 0; k--){ 
				printf("%d", *(result + k));
		}
		printf("\n");

		/*free(number1);
		  number1 = NULL;
		  free(number2);
		  number2 = NULL;
		  free(result);
		  result = NULL;
		  free(temp_ptr);
		temp_ptr = NULL;*/
		return 0;
}
