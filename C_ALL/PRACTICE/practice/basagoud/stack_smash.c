# include <stdio.h>

int main()
{
		char a[5] = "hellodgf";

//		printf("%d\n", getpid());
		strcpy( (a+2), a);

		printf("%s\n", a);

//		getchar();

		return 0;
}

