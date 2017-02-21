/*
 * File name: Arithmetic operation on two large numbers 10 to 256 degits
 * Author's : Hanamant Hullur 
 *		      Basagoud Biradarpatil
 *            Sunil Acharya
 * Date     : 19/06/2015
 * GCC Version  : (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3
*/

#include "header.h"

int main()
{
	char choice;

	printf ("\n\tArithmetic operation...\n");	
	while(1) {	
		printf ("\n\tEnter your choice\n");
		printf ("\t1==>Addition\n\t2==> Subtraction\n\t3==>multiplication\n");
		printf("\t4 ==> Exit\n");
		__fpurge(stdin);
		choice = getc(stdin);
		switch(choice) {
			case '1': printf ("STILL DOING...!!!!\n");
				  break;
			case '2': printf ("STILL DOING...!!!!\n");
				  break;
			case '3': multiplication();
				  break;
			case '4': exit(0);

			default: printf ("Enter valid input\n"); 
			          break;
		}	
	}
	return 0;
}

