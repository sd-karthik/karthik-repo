# include <stdio.h>

void fun1(void)
{
	char * sahana = "sahana";
	printf("%s\n", sahana);
	printf("Address of sahana-> %x\n", sahana);
	return ;
}

void fun2(void)
{
	char * sahana = "sahana";
	printf("%s\n", sahana);
	printf("Address of sahana-> %x\n", sahana);
	return ;
}





int main(void)
{
		char * sahana = "sahana";
	printf("%s\n", sahana);
	printf("Address of sahana-> %x\n", sahana);

		fun1();
		fun2();
		fun3();
		return 0;

}

