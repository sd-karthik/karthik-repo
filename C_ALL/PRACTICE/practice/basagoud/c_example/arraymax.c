 #include <stdio.h>
#include <stdlib.h>

int maximum(int a[], int n)
{
		int pos;
		if(n == 0)
				return 0;
		else 
				pos = maximum(a, n-1);
				if(a[pos] > a[n-1])
						return pos;
				else 
						return (n-1);

}
int main()
{
		int a[10] = {3,6,9,20,40,7,25,8};
		int max;
		int n = sizeof(a)/sizeof(a[0]);
		printf("%d is size of array\n", n);
		max = maximum(a, n-1);

		printf("%d is maximum element\n", a[max]);
		return 0;
}

