#include<stdio.h>

int main()
{
	int i;
	for(i = 0;i<=5;i++){
		fun();
	}
	return 0;
}

fun()
{
	int auto_var = 0;
	static int fn_static = 0;
	
	auto_var = auto_var + 1;
	fn_static = fn_static + 1;
	
	printf("Value of auto var->%d\n", auto_var);
	printf("Value of fn_static->%d\n", fn_static);

	printf("\n");
	return ;
}
