# include <stdio.h>

int main()
{
		int a = 1;

		switch(a) {
				int a = 5 ;	
				int b = 5;
				case 1: printf("%d %d\n", a, b);	
						a = 5;
						switch(1) {
								case 1 :  printf("Inside a ==> %d\n", a);
										  break;
						}
						break;
				case 2 : printf("Hello\n" );
						 break;
				default :printf("Default\n");
						 break;
		}

		return 0;
}
