# include <stdio.h>

int main()
{
		float fa[5];
		float f;
		char ch[5];
		char c;

		int  i[4];
		char ch1[2];
		char ch2;

		int iv;

		printf("float array 0==> %p\n",&fa);
		printf("float array 1 ==> %p\n",&fa[1]);
		printf("float array 2 ==> %p\n",&fa[2]);
		printf("float  ==> %p\n",&f);
		printf("char array 0 ==>> %p\n", &ch[0]);
		printf("char array 1 ==>> %p\n", &ch[1]);
		printf("char array 2 ==>> %p\n", &ch[2]);
		printf("char array 3 ==>> %p\n", &ch[3]);
		printf("char array 4 ==>> %p\n", &ch[4]);
		printf("char  ==>> %p\n", &c);
		printf("char10  ==>> %p\n", &ch1[0]);
		printf("char11  ==>> %p\n", &ch1[1]);
		printf("char2  ==>> %p\n", &ch2);
		
		printf("int  ==>> %p\n", &iv);
		printf("double  0==>> %p\n", &i[0]);
		printf("double  1==>> %p\n", &i[1]);
		printf("double  2==>> %p\n", &i[2]);
		printf("double  3==>> %p\n", &i[3]);
		return 0;
}
