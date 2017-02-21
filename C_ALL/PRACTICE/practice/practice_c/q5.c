/******************************************concept of union**********************************************************/
/******ascii value of null charecter is 0...so if in memory zero is there then it will think as a null charecter*****/

#include <stdio.h>

union test
{
    int x;
    char arr[4];
    int y;
};

int main()
{
    union test t;
    t.x = 0;
	t.arr[0] = 'c';
	/*if (t.arr[0] == '\0')
		printf("hey its null...\n");*/

    t.arr[1] = 'G';
    printf("%s", t.arr);
    return 0;
}
