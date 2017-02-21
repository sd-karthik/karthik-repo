 #include <stdio.h>

int main()
{
		int a[0] = { 1, 2, 3};
		printf("%x\n",a[0]);
		printf("%x\n",a[1]);
		printf("%d\n",a[2]);
		printf("%d\n",sizeof(a));
		return 0;
}
