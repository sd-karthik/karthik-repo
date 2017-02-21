#include <stdio.h>

#if 0 

int main( int argc , char * argv)
{
	printf("%d\n",MAX);
	#define MAX 10
	return 0;
}

#endif

#if 0
	#ifdef MAX 
	#include<stdio.h>
	#endif
	#define MAX 0
int main(int argc , char * argv )
{
	printf("%d\n",MAX);
	return 0;
}
#endif

#if 0

int main(int argc , char * argv)
{
	int a = 10, b = 12;
	int c ;
	c =  a +++ b;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d \n",c);
	return 0;
}

#endif

#if 0

int main(int argc , char * argv)
{
	int x = 20, y;
	char b[8] = "hello";
	y = x + b;
	printf("%d\n" , y);
	printf("%d\n",x);
	printf("%d\n",b);
	return 0;
}

#endif

#if 1
int main()
{
	char c[2]="global edge";
	printf("%s \n",c);
	c[1]='G';
	printf("%s\n",c);
	return 0;
}
#endif

