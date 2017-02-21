# include <stdio.h>

int main()
{
		int a = 1;
		int b = 3;
		int c = 3;
		int d =3 ;
		int e = 4;
		switch(a) {
				int a = 5 ;	
				int b = 5;
				case 1: printf("%d %d\n", a, b);	
						a = b + c + d + e;
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


  /*
   *  Dead code is removed here,
   *  check with gcc-fdump-tree-all filename.c
   */
