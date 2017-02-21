#include<stdio.h>

union u_number 
{
	int b;
	float a;
	char c[4];
}u;

int main()
{
	int j, i;
	u.a = 0.00000000000000000000000000000000000000000005;
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
	for(i=3;i>=0;i--) {
		for( j=7;j>=0;j--){
			if((u.c[i]&(1<<j)))
				printf("1");
			else
				printf("0");
	
		if(j%8==0)
			printf("\n");	
		}

		
	}
			
	printf("\n");
//	printf("%s\n",u.c);
	//printf("%c\n",u.c[3]);
//	printf("%d\n",u.b);	
	return 0;
}
