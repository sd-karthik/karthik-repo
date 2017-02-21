/*Program to find largest of two numbers without using 

  * if else statement
  * conditional opeartor
  * bitwise operators
  * loops

  */

/*
   * If both numbers are equal it prints 0
*/
# include <stdio.h>

int main()
{
		int  num1 = 10, num2 = 1;
		printf("Largest of two numbers  %d and %d is --> %d\n", \
						num1, num2, (num1 > num2) * num1 + (num1 < num2) * num2);

		return 0;
}
