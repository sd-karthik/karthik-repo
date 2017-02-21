# include <stdio.h>
struct a {
	int b;
	int c;
	int d;
} i={7,2,3};
int main(){
	struct a *p=&i;
	printf("%d %d %d\n",*p);
	return 0;
}
