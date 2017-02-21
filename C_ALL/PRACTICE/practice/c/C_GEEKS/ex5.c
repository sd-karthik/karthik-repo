
#include <stdio.h>
int f(int x, int *py, int **ppz) 
{ 
		int y, z; 

		printf("before **ppz-->%d\n", **ppz);
		**ppz += 1; 
		
		printf("after **ppz-->%d\n", **ppz);
		z  = **ppz; 
		printf("before *py -> %d\n", *py);
		*py += 2; 
		printf("after *py -> %d\n", *py);
		y = *py; 
		printf("x -> %d\n", x);
		x += 3; 
		printf("x -> %d\n", x);
		return x + y + z; 
} 

int main(void) 
{ 
		int c, *b, **a; 
		c = 4; 
		b = &c; 
		a = &b; 
		printf("%d \n", f(c, b, a)); 
		return 0;
}
