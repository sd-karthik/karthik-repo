//9_macro.c

//Macros for bit operations

#include<stdio.h>

extern int showbit(int );

#define max(num1, num2)									\
	for(i=31; (i>=0) && ((num1 >> i ) ^ (num2 >> i));i--){	\
		printf("%d\n",((num1 >> i)&1) ? num1 : num2);					\
	}
	

#define min(num1, num2) \
	for(i=31; (i>=0) && ((num1 >> i ) ^ (num2 >> i));i--){ \
		printf("%d",((num2 >> i) &1) ? num1 : num2); \
	} 

#define r_clear(num) \
	for(i=0; (i<=31) && ((num >> i) & 1); i++) { \
		num= (num & (~ (1 << i))); \
	} \
	showbit(num);

#define l_clear(num) \
	for(i=31; (i<=0) && ((num << i) & 1); i++) { \
		num= (num & (~ (1 << i))); \
	} \
	showbit(num);

#define r_set(num) \
	for(i=0; (i<=31) && (((num>> i) & 1)==0); i++) { \
		num= num | ( 1 << i); \
	} \
	showbit(num);

#define l_set(num) \
	for(i=31; (i<=0) && (((num << i) & 1)==0); i++) { \
		num= num | (1 << i); \
	} \
	showbit(num);

#define sd_set(s, i, num) \
	num=num | (((~0) << d) & ~((~0) << (s + 1)));\
	showbit(num);

#define sd_toggle(s, d, num) \
	num=num ^ (((~0) << d) & ~((~0) << (s+1)));\
	showbit(num);

#define sd_clear(s, d, num) \
	num= (num | (~0)) & (~(((~0) << d) & (~((~0) << (s+1))))); \
	showbit(num);

int main(void)
{
	int num;
	int num1;
	int num2;
	int s;
	int d;
	int i;

	printf("Enter the 2 numbers to find maximum and minimum\n");
	scanf("%d%d", &num1, &num2);
	
	printf("Maximum of 2 number=\n");
	max ( num1, num2); 

	printf("Minimum of 2 number=\n");
	min ( num1, num2);

	printf("Enter a number to bit operate\n");
	scanf("%d", &num);

	showbit(num);

	printf("Enter the source and destination position\n");
	scanf("%d%d", &s, &d);

	printf("Clearing right most set bit=\n");
	r_clear(num);

	printf("\nClearing left most set bit=\n");
	l_clear(num);

	printf("\nSetting right most clear bit=\n");
	r_set(num);

	printf("\nSetting left most clear bit=\n");
	l_set(num);

	printf("\nSetting from s to d and clearing rest\n");
	sd_set(s,d,num);

	printf("\nClearing from s to d and setting rest\n");
	sd_clear(s,d,num);

	printf("\nToggling bits from s to d\n");
	sd_toggle(s,d,num);

	return 0;
}
