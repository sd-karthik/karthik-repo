#include<stdio.h>

extern int showbit(int num);
#define bit_ts(num,pos)   (num|(1<<pos))// this is a macro for stting bit

int main()

{

	int num;
	int pos;

	printf("enter a number and bit position to set");
	scanf("%d %d", &num, &pos);

	num = bit_ts (num,pos); //calling macro
	printf("num: %d", showbit(num));
	return 0;
}
