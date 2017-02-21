# include <stdio.h>

int main()
{
		FILE * fp = popen("ls -lrt |grep 'a.out'", "w");
		wait(NULL);
		return 0;
}
