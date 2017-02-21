#include<stdio.h>

union u_number 
{
	int b;
	float a;
	char c[4];
}u;

int main()
{
	int j;

	u.c[0] = 5;
	u.c[1]=3;
	u.c[2]=2;
	u.c[3] =6;

	u.a = 3.7;
	printf("floating in binary\n");
	for(j = 31;j >= 0;j--){
		if(((u.b) & (1 << j)) ==0)
			printf("0");
		else
			printf("1");
		if(j % 8 == 0)
			printf(" ");
	}

	printf("\n");
//	printf("%s\n",u.c);
	//printf("%c\n",u.c[3]);
//	printf("%d\n",u.b);	
	return 0;
}
