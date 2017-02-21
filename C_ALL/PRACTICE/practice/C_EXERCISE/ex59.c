# include <stdio.h>

int main()
{
		printf("\033[31mGame \033[32mof \033[33mcolors \033[34m in C\n");
		printf("\033[35mValue \033[37mof \033[31mwhite space ==> \033[36m%x\n\033[m", ' ');

		printf("\033[34mThe end\n");
		return 0;
}
