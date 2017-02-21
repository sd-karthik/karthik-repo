 #include <stdio.h>

int main()
{
		int a = 10;
		const int * const p = &a;
		const int * q = &a;
		int * const r = &a;
		int const * z  = &a;
		int const * const ptr = &a;
//		const const  y;
//		y = 20;
		//*y = 30;
		//(*y)++;
		p++;
		ptr++;
		*ptr = 300;
 
		*p = 30;
		printf("%p \n", p);
		printf("%p \n", *p);

		printf("%p \n", &a);
		q++;
		*q =50;

		r++;
		*r = 60;

		z++;
		*z = 20;

		printf("%d\n", a);
		
		return 0;
}
