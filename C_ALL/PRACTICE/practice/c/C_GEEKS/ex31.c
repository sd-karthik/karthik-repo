/*Macro replacement*/

# include <stdio.h>
# define scanf  "%s Geeks For Geeks "
 int main(void)
{
		printf(scanf, scanf);      

		putchar(10);
		return 0;
}
