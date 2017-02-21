/********************************************************how to optimize switch statments using array of function pointers*******************/
#include <stdio.h>

void fun0()
{
	printf("fun0\n");
}
void fun1()
{
	printf("fun1\n");
}
void fun2()
{
	printf("fun2\n");
}
void fun3()
{
	printf("fun3\n");
}
		

int main()
{
	int c;
	printf("enter choice\n");
	scanf("%d",&c);

	/*switch(c){
		case 0: 
			fun1();
			break;
		case 1: 
			fun2();
			break;
		case 2: 
			fun3();
			break;
		default: 
			fun4();
			break;
	}*/
	
	void (*fp[])() ={fun0, fun1, fun2, fun3};
	if(c >= 0 && c <= 2)
		fp[c]();
	else
		fp[3]();

}

