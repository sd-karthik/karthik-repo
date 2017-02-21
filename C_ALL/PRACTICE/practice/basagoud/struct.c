#include<stdio.h>

struct tag{
	int a;
	int b;
}obj;

int main()
{
	struct tag obj2={20,30};
	printf("Global : %d %d \n",obj.a,obj.b);
	printf("Local : %d %d\n",obj2.a,obj2.b);
	return 0;	
}

