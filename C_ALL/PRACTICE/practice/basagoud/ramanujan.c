/*
  Program to find least ramanujan's number
  number = a^3 + b^3
  number = m^3 + n^3
*/

/*
   program will not work for float or double type variables.
*/

# include <stdio.h>

#include <stdlib.h>
# include <math.h>
# include <limits.h>

int main()
{
	unsigned int a = 1;
	unsigned int b;
	unsigned int m,n;
	unsigned int num1 ;
	unsigned int num2;

	while(a < ULONG_MAX ) { // 
		for(b = 1; b < a ;b++) {
					// finding the sum of cubes of two numbers
			num1 = pow(a,3) + pow(b,3);

			for(m = 1; m < (a+b);m++) {
				if(m == a || m ==b ) {
					continue;
				} else {
					n = (int) cbrt(num1 - pow(m,3));
				}

				if(n!=m && n !=b && n!=a && n > 0) {
					num2 = pow(m,3) + pow(n,3);
				} else {
					continue;
				}
				if(n < m) {
					continue;
				}
				if((num1 == num2) && (m!=a) && (m!=b)) {
					printf("%d\n", num1);
					printf("a = %d\nb = %d\nm = %d\nn = %d\n", \
							a,b,m,n); 
					exit(0);
				}
			}
		}
	a++;
	}
	return 0;
}
