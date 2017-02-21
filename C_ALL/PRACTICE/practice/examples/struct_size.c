 #include <stdio.h>
struct example{
		char a;
		char b;
		char c;
		short int d;
		char e;
}x;

int main()
{
		printf("Size of struct ==> %d\n",sizeof(struct example));
		return 0;
}
