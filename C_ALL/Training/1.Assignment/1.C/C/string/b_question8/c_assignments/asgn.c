# include<stdio.h>	
void showbit(int a);
#if 1
int main()


	{
 int num=-16;    
	int n ;
 int a=num;
	int i,msb,lsb;
	printf ("number of bits to be left shifted:\n");
	scanf ("%d",&n);
      //  showbit (num);
//	printf("\n");
/*	a = a | (1<<5); // set
        printf ("\n 5th bit is set\n");
	showbit (a);  
        a = num;
        a = a & (~(1<<5)); //clear
	printf ("\n 5th bit is made clear\n");
        showbit (a);
        a = num;
        a = a ^  (1<<5); //clear
        printf ("\n 5th bit is made toggle\n");
        showbit (a);
        a = num;
	msb = (a & (1<<7))>>7;       // negative or positive
	printf ("\nmsb=%d \n",msb);
	if (msb == 1)
	printf ("negative\n");
	else
	printf ("positive\n");
	a = num;
        msb = (a & (1<<7))>>7;       // negative or positive
        printf ("\nmsb=%d \n",msb);
        if (msb == 1)
        printf ("negative\n");
        else
        printf ("positive\n");
	a = num;
        lsb = (a & 1);       // negative or positive
        printf ("\nlsb=%d \n",lsb);
        if (lsb == 1 && a != 0)
        printf ("odd \n");
        else
        printf ("even\n");
*/
	a = num;
        showbit (a);
	printf("\n");
	msb = ((a & (1<<31))>>31)&1;       //single bit left rotation
       printf ("%d \n",msb);
	 a = a << 1;
       	
	a = a |(msb);
	showbit (a);
	printf ("\n");
	
/*
        a = num;
        showbit (a);
        printf("\n");
        msb = ((a & (0xFFFF<<(31-n)))>>(31-n)&0xFFFF);       //dual bit left rotation
        printf ("%d \n",msb);
        a = a << n;

        a = a |(msb);
        showbit (a);
        printf ("\n");
*/
	}
	  
#endif 
void  showbit (int a)

	{
	int i; 
	for(i=31; i>=0;i--)
	{
	printf ("%d",(a&(1<<i))?1:0);
	}
	}
