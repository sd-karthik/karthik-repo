#include<stdio.h>

inline int MAX(int a, int b) {return a > b ? a : b;}

#define max(a,b)  (a > b ? a : b)

int main()

{

	printf("\nThe inline function result :is %d\n",MAX(5,6));

	printf("\nTHe macro function result :is %f \n",max(5.5,6));

	return 0;

}
