/************************************************************************
  program for multiplication of two large numbers
  ************************************************************************/

# include "header.h"


int main( void )
{
	    char * number1 = NULL ;
		char * number2 = NULL;

		/*Allocating memory for number1*/
		if ((number1 = (char *) malloc( SIZE)) == NULL) {
				perror("malloc error\n");
				exit(2);
		}
		/*Allocating memory for second number*/
		if((number2 = (char *) malloc( SIZE)) == NULL) {
				perror("malloc error\n");
				exit(2);
		}

		multiplication(number1, number2);


		return 0;
}
