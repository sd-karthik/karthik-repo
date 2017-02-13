/*Given the bit position s in number snum and the bit position d in
 number dnum, swap bit values between s and d.*/
#include<stdio.h>
extern int showbit(int num);
int main()

{

   int snum, dnum, s, d;

   printf("swapping two bits from two numbers\n");
   printf("enter two numbers snum & dnum\n");    
   scanf ("%d %d", &snum, &dnum);

   printf("\nenter the bit numbers from two numbers to swap\n");
   scanf("%d %d", &s, &d);

   if(((snum>>s)&1) == ((dnum>>d)&1)){
   
    printf("\nafter swapping bits:\n"); 
    	  showbit(snum);
    printf("\n");
	showbit(dnum);
    
    } else
       {
         snum=(1<<s)^snum;
         dnum=(1<<d)^dnum;
         printf("\nafter swapping bits: \n");
         showbit(snum);
	printf("\n");
	 showbit(dnum);
       }

}
