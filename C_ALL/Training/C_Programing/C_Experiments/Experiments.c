#include<stdio.h>

#if ex1
//Void Experiment

int main()
{

	void p;
	printf("%d", p);
	return 0;
}
#endif

#if ex2
//Function Experiment
int fun()
{
	printf("Outside\n");	
	fun();
}
i
int main()
{
//		fun();
	int fun()                 
	{                         
   	   printf("inside\n");  
	}                         
	fun();
}
#endif

#if ex3
//Register Experiment
int main()
{
	register int a =10;
	
	printf("%p",&a);

	return 0;
}
#endif

#if ex4
//Structure size
struct ex
{

		char b;
		short int q;
		int m;		
}e;

void main()
{
	printf("%d", sizeof(e);

#endif

#if ex5
//printf return value
int main()
{
	if(printf("Hello ") == 0) 
		printf("Hello ");
	else
		printf("World\n");

	return 0;
}
#endif

#if ex6
//implicit typecasting
void main()
{
	int n=513;
	char c=n;
	printf("%d\n",c);

}
#endif

#if ex7
//switch experiment
void main()
{
	int i=0;
	int j=0;

	switch(i)
	{
		case '0': printf("global ");
				break;
		case j : printf("edge");
				break;
		default: printf("global edge");
				break;
	}

}

#endif

#if ex8
//Structure EXperiments
struct A {
	int a;
	struct B *p;
//	char ch;
}x;

int  main()
{
//	x.ch = 80;
//	x.p -> n = 88;	
	
//	printf("so(A)=%d\n so(p) = %d\n", sizeof(struct A), sizeof(p));
	printf("so(A)=%d\n", sizeof(struct A));

	return 0;
} 
#endif

#if ex9
//Greater number of 3 in ternary
void main()
{
	int a=10;
	int b=15;
	int c=225;
	int res;
//	char ch = a;
	res=((a> b) && (a> c)) ? a: ((b >c)? b: c);
	printf("%d\n", res);
}
#endif

#if ex10
//Array access as pointer
int main()
{
	int a[5] = {0,1,2,5,4};

	printf("a=%p\ta+1= %p\t a+4=%p\t&a=%p\n&a+1=%p\t", a, a+1, a+4, &a, &a+1);
	printf("*a=%d\t*(a+1)=%d*(a+0)=%d\na[1]=%d\n", *a, *(a+1), *(a+0), a[1]);
	printf("a[0]=%d\t*a+1=%d\t*a+2=%d\n", a[0], *a+1, *a+2);
	
	printf("a[3]-a[2]=%d\n",a[3]-a[2]);
	printf("sizeof array=%d",sizeof(a));
}
#endif

#if ex12
//strings, character array
void main()
{
	char ch1[]={ 'a','b','c'};
	char ch2[]={"def"};
	char ch3[2]={'e'};
	
	printf("ch1[]=%s\nch2[]=%s\nch3=%s", ch1, ch2, ch3);
}
#endif

#if ex11
//display 
#include<stdio.h>
void main()
{
	printf("%d");
}
#endif

#if ex13
//return in printf
int main()
{
	printf("%d",return 1);
}
#endif

#if ex14
//pointer
void main()
{
	int a=10;
	int *p;
	int **r;
	p = &a;
	r=&p;
	
	printf("address of p=%p\n", p);
	printf("address of *r=%p\n", *r);
	printf("address of &r=%p\n", &r);
	printf("data of *p=%d\n", *p);
	printf("**p=%p",**p);
 
}
#endif
