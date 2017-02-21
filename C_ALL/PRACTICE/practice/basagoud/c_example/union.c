# include <stdio.h>

union A{
	int a;
	int b;
};
void fun(int a) {
	printf("Union a==> %d\n",  a);
	return ;
}
int main(void)
{

	union A U_var;
	printf("In main function\n");

	U_var . a = 10; 
	printf("union a ==> %d\n", U_var . a);
	printf("union b ==> %d\n", U_var . b);

	fun(U_var.a);

	return 0;
}
