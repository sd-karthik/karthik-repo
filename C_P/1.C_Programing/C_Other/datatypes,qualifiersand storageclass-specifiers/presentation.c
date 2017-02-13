#include <stdio.h>
#include <stdlib.h>
#include <float.h>

//program which display the size of Basic data types

#if 0
int main()
{
	 printf("Size of\n");
	 printf("\tcharacter = %d\n",sizeof(char));
	 printf("\n\tinteger = %d\n",sizeof(int)); 
	 printf("\tshort integer = %d\n",sizeof(short int)); 
	 printf("\tlong integer = %d\n",sizeof(long int)); 
	 printf("\tlong long integer = %d\n",sizeof(long long int)); 
	 printf("\n\tfloat = %d\n",sizeof(float)); 
//	 printf("\tlong float = %d\n",sizeof(long float)); 
//	 printf("\tshort float = %d\n",sizeof(short float)); 
	 printf("\n\tdouble = %d\n",sizeof(double)); 
//	 printf("\tshort double = %d\n",sizeof(short double)); 
	 printf("\tlong double = %d\n",sizeof(long double)); 
	 printf("\n\tvoid =%d\n",sizeof(void));
	printf("\tvoid of main function = %d\n",sizeof(main()));
	printf("\tvoid pointer = %d\n",sizeof(void*));
	printf("\tvoid = %d\n",sizeof(main)); 
	return 0;
}
# endif

#if 0
int main() {

   printf("Storage size for float : %d \n", sizeof(float));
   printf("Minimum float positive value: %E\n", FLT_MIN );
   printf("Maximum float positive value: %E\n", FLT_MAX );
   printf("Precision value: %d\n", FLT_DIG );
   
   return 0;
}
# endif

// constant qualifier
# if 0
//const int a = 20;
int main()
{
	const int a = 12;
//	scanf("%d",&a);
	printf("%d\n",a);
	{
	int a = 10;
//	scanf("%d",&a);
	printf("%d\n",a);
	}
	printf("%d\n",a);
	return 0;
}
# endif
// pointer to constant
# if 0
int main(void)
{
    int i = 10;   
    int j = 20;
    const int *ptr = &i;    /* ptr is pointer to constant */
  
    printf("ptr: %d\n", *ptr); 
    *ptr = 100;        /* error: object pointed cannot be modified
 //                    using the pointer ptr */
  
    ptr = &j;          /* valid */
    printf("ptr: %d\n", *ptr);
  
    return 0;
}
# endif
//constant pointer 
# if 0
int main(void)
{
   int i = 10;
 //  int j = 20;
   int *const ptr = &i;    /* constant pointer to integer */
  
   printf("ptr: %d\n", *ptr);
  
   *ptr = 100;    /* valid */
   printf("ptr: %d\n", *ptr);
  
  ptr = &j;        /* error */
   return 0;
}
# endif
//constant pointer to constant
# if 0
int main(void)
{
    int i = 10;
 //   int j = 20;
    const int *const ptr = &i;        /* constant pointer to constant integer */
  
    printf("ptr: %d\n", *ptr);
  
//    ptr = &j;            /* error */
//    *ptr = 100;        /* error */
  
    return 0;
}
# endif
//memory layout
#if 0

int ab;
int c;
int d = 10;
static int a;

int main(void)
{
	register int e = 40;
	const int f = 20;
    return 0;
}
# endif
# if 1
extern int x ;
 
// declaring and initialing a global variable z
// simply int z; would have initialized z with
// the default value of a global variable which is 0
int z = 10;
 
int main()
{
    // declaring an auto variable (simply
    // writing "int a=32;" works as well)
    auto int a = 32;
 
    // declaring a register variable
    register char b = 'G';
 
    // telling the compiler that the variable
    // x is an extern variable and has been
    // defined elsewhere (above the main
    // function)
    extern int z;
	int x = 9;
 
    printf("Hello World!\n");
 
    // printing the auto variable 'a'
    printf("\nThis is the value of the auto "
           " integer 'a': %d\n",a);
 
    // printing the extern variables 'x'
    // and 'z'
    printf("\nThese are the values of the"
           " extern integers 'x' and 'z'"
           " respectively: %d and %d\n", x, z);
 
    // printing the register variable 'b'
    printf("\nThis is the value of the "
           "register character 'b': %c\n",b);
 
    // value of extern variable x modified
    x = 2;
 
    // value of extern variable z modified
    z = 5;
 
    // printing the modified values of
    // extern variables 'x' and 'z'
    printf("\nThese are the modified values "
           "of the extern integers 'x' and "
           "'z' respectively: %d and %d\n",x,z);
 
    // using a static variable 'y'
    printf("\n'y' is a static variable and its "
           "value is NOT initialized to 5 after"
           " the first iteration! See for"
           " yourself :)\n");
 
    while (x > 0)
    {
        static int y = 5;
        y++;
 
        // printing value of y at each iteration
        printf("The value of y is %d\n",y);
        x--;
    }
	return 0;
}
# endif
