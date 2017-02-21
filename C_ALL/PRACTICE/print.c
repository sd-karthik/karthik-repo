# include <stdio.h>

*a = "\33[31mjunk/\33[32msuper\33[31m??";

int
	main(void)
{
		printf("\33[34mHow is c programming?\33[31m\n");
		if(!(puts(a))) {
				char a[] = "hello";
				puts(a);
		}
		printf("\33[32m%s\n\33[m",&"Junk/Super"[5]);
		return 0;
}


