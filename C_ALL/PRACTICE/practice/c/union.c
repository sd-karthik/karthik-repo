 #include <stdio.h>

union a{
		struct abc{
				int a;
				int b;
		}obj;
		struct ab{
				int a;
				int b;
				int c;
		}obj1;
}obj = { 1, 2, 3};


int main()
{

		printf("sizeof union ==>%d\n", sizeof(obj));
		printf("sizeof struct abc ==>%d\n", sizeof(obj.obj));
		printf("sizeof struct ab ==>%d\n", sizeof(obj.obj1));
		printf("%d\n", obj.obj1.c);
		return 0;
}
