#include<stdio.h>
unsigned char test_endian( void )
{
    int test_var = 0x1234;
    unsigned char *test_endian = (unsigned char*)&test_var;
    
#if 0
	printf("test endian ==> %x\n", &(test_endian[0]));
	printf("test endian ==> %x\n", &(test_endian[1]));
	printf("test endian ==> %x\n", &(test_endian[2]));
	printf("test endian ==> %x\n", &(test_endian[3]));

	printf("Test endian [0] ==> %d\n" ,test_endian[0]);
	printf("Test endian [0] ==> %d\n" ,test_endian[1]);
	printf("Test endian [0] ==> %d\n" ,test_endian[2]);
	printf("Test endian [0] ==> %d\n" ,test_endian[3]);
#endif
	return (test_endian[0] == NULL);
}
int main()
{
	if (test_endian())
		printf("big endian\n");
	else
		printf("little endian\n");
		
    return 0;
}
