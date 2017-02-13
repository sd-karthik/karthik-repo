#include<stdio.h>
#include<limits.h>
#include<float.h>
#include "showbit.c"
//int i=5;
//static int si=10;
/*Program 1: To find Size of int */
#if 0
int main()
{
	printf("size of int=%d\n",sizeof(int));
	printf("size of float=%d"sizeof(float));
	return 0;
}
#endif

/*Program 2: to find the range*/
#if 0
int main()
{
	printf("Maximum size of char=%d\n",CHAR_MAX);
	printf("Minimum size of char=%d\n",CHAR_MIN);
	printf("Maximum size of int=%d\n",INT_MAX);
	printf("Maximum size of int=%d\n",INT_MIN);
	printf("Maximum size of float=%f\n",FLT_MAX);

	return 0;
}
# endif

/*Program 3: Storage classes : static, global*/
#if 0
int main()
{ 
	printf("Value of global before increment=%d\n",i);
	printf("Value of static before increment=%d\n",si);

	i++;
	si++;	
	i
		printf("Value of global after increment=%d\n",i);
	printf("Value of static after increment=%d\n",si);
	return 0;
}
#endif

#if 0
/*Program 4: usage of storage class auto */
int main()
{
	aut();	
}
int aut()
{
	int auto num = 5;
	printf("%d ",num);
	{
		int auto num = 6;
		printf("%d \n",num);
		num++;
	}
	num++;
	return 0;
}
#endif

#if 0

// Program 5: static function
int stat()
{
	static int a=4;
	return a++;
}
int main()
{
	printf("static value=\n");
	printf("%d\n",stat());
	printf("%d\n",stat());
	return 0;
}
#endif

#if 0
// program 6: Post, pre increment & decrement
void main()
{
	int a=10,b=20;
	printf("Before increment value of A=%d\n",a);
	printf("Pre increment of A=%d\n",++a);
	printf("Post increment of A=%d\n",a++);
	printf("before decrement of B=%d\n",b);
	printf("pre decrement of B=%d\n",--b);
	printf("post decrement of B=%d\n",b--);
}
#endif

#if 0
// program 7: Calculator
void main()
{
	float num1,num2;
	int key;
	printf("**********************************\n");
	printf("KARTHIK WELCOMES YOU TO THE THE CALCULATOR\n");
	printf("Feel free to type two number\n");
	scanf("%f%f",&num1,&num2);
	printf("Enter your option:\n1.Addition\n2.Subtraction\n3.Multiplication");
	printf("\n4.Division\n");
	scanf("%d",&key);
	switch(key)
	{
		case 1: printf("Addition:\n%f+%f=%f\n",num1,num2,num1+num2);
				break;
		case 2: printf("Subtraction:\n%f-%f=%f\n",num1,num2,num1-num2);
				break;
		case 3: printf("Multiplication:\n%f*%f=%f\n",num1,num2,num1*num2);
				break;
		case 4: printf("Division:\n%f/%f=%f\n",num1,num2,num1/num2);
				break;
		default:printf("Invalid option\n");
				break;
	}
	printf("Thank You for using Calculator\n");
	printf("***** HAVE A GOOD DAY *****\n");
}
#endif

#if 0
//Program 8: Decimal to binary conversion till 32 bits
int main()
{
	int num;
	int i;
	printf("WElCOME TO DECIAML TO BINARY PROGRAM\n");
	printf("Enter the decimal number \n");
	scanf("%d",&num);
	printf("The binary number of %d is:\n",num);
	for(i=(8*sizeof(int))-1;i>=0 ;i--)
	{
		if((i+1)%8==0)
			printf(" ");
		printf("%d", 1 & (num >> i));
	}
	printf("\n");
}
#endif

#if 1
/*Program:Bit Operation*/ 
int main()
{
	int num;
	int pos;
	int opt;
	printf("WElCOME TO BIT OPERATOR PROGRAM\n");
	printf("Enter the your option \n");
	printf("1.Setbit\n2.Clearbit\n3.Togglebit");
	scanf("%d",&opt);
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("The number Before the operation\n");
	showbit(num);
	switch (opt)
	{
		case 1 : printf("Enter the position of bit to be SET\n");
				 scanf("%d",&pos);
				 showbit( num | (1 << pos));			
				 break;
		case 2 : printf("Enter the position to be cleared\n");
				 scanf("%d",&pos);
				 showbit( num & ~( 1<< pos));
				 break;
		default: printf("Invalid option");
				 break;
	}
	return 0;
}

#endif
