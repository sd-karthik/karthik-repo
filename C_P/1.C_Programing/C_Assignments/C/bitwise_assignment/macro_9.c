/* Macros using bitwise operators */

#include<stdio.h>

extern int showbit(int num);

#define r_set(num) for (i = 0; i <= 31; i++) {                    \
                            if (rset & (1 << i)) {                \
			           rset = rset & (~(1 << i)); \
			           break;                             \
			    }                                         \
                       }                                              
                       
#define r_clear(num) for (i = 0; i <= 31; i++) {                     \
		             if ((rclear & (1 <<  i)) == 0) {        \
				   rclear = rclear | (1 << i);   \
				   break;                                \
			     }                                           \
			 }                                            
			 
#define l_set(num) for (i = 31; i >= 0; i--) {                        \
			   if (lset & (1 << i)) {                     \
				  lset = lset & (~(1 << i));       \
				  break;                                 \
			   }                                             \
		      }                          
		     
#define l_clear(num) for (i = 31; i >= 0; i--) {                      \
		             if ((lclear & (1 <<  i)) == 0) {         \
				   lclear = lclear | (1 << i);     \
				   break;                                \
			     }                                           \
			 }                               

#define setbits(num, s, d) (num & (~((~0) << (d - s + 1))) << s)   \
				| ((~((~0) << (d - s + 1))) << s)

#define clearbits(num, s, d) (~((num & (~((~0) << (d - s + 1))) << s)   \
				| ((~((~0) << (d - s + 1))) << s)))

#define toggle(num, s, d) num ^ ((~((~0) << (d - s + 1)) << s))

#define max_min(num_1, num_2) for (i = 31; i >= 0; i--) {                           \
				   if (((num_1 & (1 << i)) ^ (num_2 & (1 << i)))) { \
					if (((num_1 >> i) & 1) == 1) {              \
					     max = num_1;                           \
					     break;                                 \
					} else {                                    \
					     max = num_2;                           \
					     break;                                 \
				        }                                           \
				   }                                                \
			      }
                                                     

extern int showbit(int num);   //function to showbit() from file showbit.c

int main(void)
{
	int num;  
	int s;    
	int d;    
	int i;
	int toggle; 
	int setbits; 
	int max;      
	int num_1;    
	int num_2;    

	printf("Enter any valid number to perform bitwise operation\n");
	scanf("%d", &num);

	showbits(num);   //function call for decimal to binary form

	printf("Enter the start position of bit\n");
	scanf("%d", &s);

	printf("Enter the end position of bit\n");
	scanf("%d", &d);

	printf("After the rightmost set bit is cleared\n");
	showbit(r_set(num));

	printf("After the rightmost clear bit is set\n");
	showbit(r_clear(num));

	printf("After the leftmost set bit is cleared\n");
	showbit(l_set(num));

	printf("After the leftmost clear bit is set\n");
	showbit(l_clear(num));
	
	printf("After the setbits operation from %d to %d positions\n", s, d);
	showbits(setbits(num, s, d));

	printf("After the clearbits operation from %d to %d positions\n", s, d);
	showbits(clearbits(num, s, d));
	
	printf("After the toggle operation from %d to %d positions\n", s, d);
	showbits(toggle(num, s, d));
	
	printf("Greater of 2 numbers\n");
	printf("Enter any two numbers to check which one is greater\n");
	scanf("%d%d", &num_1, &num_2);

	max_min(num_1, num_2);

	printf("The greater number is %d\n", max);

	return 0;
}
