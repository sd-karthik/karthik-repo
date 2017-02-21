#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

#ifdef ex1

typedef struct sample{
    char   a;
    int    b;
    double c;
} __attribute__((packed)) sample;

int main()
{
	printf("%d", sizeof(sample));
	return 0;
}

#endif 
#ifdef ex2
#pragma pack(push, 2)

typedef struct tag {
	char a;
	int b;
} obj;

int main()
{
	printf("%d\n", sizeof(obj));
	printf("%u\n",  offsetof(obj, b));
	return 0;
}
#endif

#ifdef ex3

struct tag {
	char a;
	char b;
	int c : 2;
//	short c :2;
	struct  tag2{
		char d;
		char e ;
		int f;
//		short q;
//		short r;
	};
	short int g;
};
int main()
{
	printf("tag = %d", sizeof(struct tag));
	printf("tag2 = %d", sizeof(struct tag2));
	return 0;
}
#endif

#ifdef ex4

struct tag {
	short int a;
	union tag_1{
		int b : 4;
		char c;
	};
	char d;
};

int main()
{
	printf("%d\n", sizeof(struct tag));
	printf("%d\n", sizeof(union tag_1));
	return 0;
}

#endif
#ifdef ex5
struct tag{
	short s:9;
	int j:9;
	char c;
	short t:9;
	short u:9;
	char d;
}obj ;

int main()
{
	printf("%p\n", &obj.c);
	printf("%p\n", &obj.d);
	printf("%d", sizeof(struct tag));
	return 0;
}
#endif 

#if ex6
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

#ifdef ex7

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

#ifdef ex8

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
#ifdef ex9

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
#ifdef ex10
union tag {
	float a;
	int b;
}obj;
 
int main()
{
	int i;
	obj.a = 12.16;
	printf("%x\n", obj.b);
	for(i = 31; i >= 0; i--) 
		printf("%d",(obj.b >> i) & 1);
	printf("\n");


}
#endif
