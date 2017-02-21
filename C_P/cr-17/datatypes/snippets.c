#include<stdio.h>
#if ex1
#pragma pack (2)    
            
struct nested {
	int  x;
	char y;
	int  z;
};

#pragma pack (1)   
        
struct packed {
	int a;
	char b;
        struct nested  s1;     
};

int main()
{
	struct nested nest;
	struct packed pack;

	printf("size of nest = %d\n", sizeof(nest));
	printf("size of pack = %d\n", sizeof(pack));
}

#endif

#ifdef ex2

struct test {
   	char ch;
   	short int y : 0;
};
 
int main()

{
   	printf("Size of test2 is %d bytes\n", sizeof(struct test));
  	 return 0;
}
#endif

#ifdef ex3

struct sample {
	char ch;
	char ch1;
	char ch2;
	char ch3;
	int  : 0;
} obj;

int main()
{
	printf("%d\n",sizeof(obj));
	return 0;
}
#endif                
#ifdef ex5

struct  sample {
	unsigned int : 8;
	char  : 0; 
 } x;

int main()
{
	printf("%d", sizeof(x));
	return 0;
}
#endif   
#ifdef ex6
union tag {
	float a;
	int b;
}obj;
 
int main()
{

	obj.a = 12.16;
	printf("%x", obj.b);
}
#endif
