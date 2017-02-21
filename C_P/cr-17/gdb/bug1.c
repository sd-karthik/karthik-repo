#include<stdio.h>
#include<stdlib.h>
#if 1
#define MAX 5 

struct entry{
	int key;
	char *name;
	float price;
	long serial_number;
}obj;

int divint(int, int); 
void func();
int main(int argc ,char *argv[]) 
{ 
	int i=0;
	int x;
	int y;
	obj.key=11345;
	obj.price=12.33333;
	obj.serial_number=10000;

	printf("arguments=%d\n",argc);
	
	for(i=0;i<argc;i++)
		printf("variable=%s\n",argv[i]);

	while(i < MAX){
		printf("%d\n",i);
		i++;
	}
	func();
	printf("enter variables to divide\n");
	scanf("%d%d",&x,&y);
	//divint(x,y);
	printf("result=%d\n", divint(x, y)); 
	func();

	x =3; y = 0;
	//divint(x,y);
	printf("result=%d\n",divint(x, y)); 
				      
	return 0; 
}

void func(){
	int i=50;
	printf("func()=%d\n",i);
}

int divint(int a, int b) 
{ 
	printf("%d,%d\n",a,b);
	   return a / b; 
}   
#endif

#if 0
int main()
{
	int *p=NULL;
	printf("pid = %d\n", getpid());
	p = 5;
	printf("%d",*p);
	return 0;
}
#endif

#if 0
void setint(int*, int); 
int main() 
{ 
	int a; 
	setint(&a, 10); 
	printf("%d", a ); 
			    
	int b; 
	setint(b, 10); 
	printf("%d", *b ); 
						    
   return 0; 
} 

void setint(int* ip, int i)
{
	   *ip = i; 
}
#endif

#if 0
#include<stdio.h>	 	 
int i=10;
void func1();	 	 
void func2();	 	 
int main() {	 	 
	 //int i=90;	 	 
	  /*while(i < 100){
		  i++;
		  printf("i=%d\n",i);
	}*/
	  func1();	 	 
	   printf("In Main(): %d\n",i);	 	 
}	 	 
void func1() {	 	 
	 //int n=20;	 	 
	  printf("In func1(): %d\n",i);	 	 
	   func2();	 	 
}	 	 
void func2() {	 	 
	 //int n = 30;	 	 
	  printf("In func2() : %d\n",i);
	  i=i+10;
}
#endif

#if 0
#include <stdio.h>
int sum(int n);
int d;
int main()
{
	int number, result;

	printf("Enter a positive integer: ");
	scanf("%d", &number);

	result = sum(number);

	printf("sum=%d\n", result);
}

int sum(int num)
{
	if (num!=0)
		return num+ sum(num-1); // sum() function calls itself
	else
		return num;
}
#endif
