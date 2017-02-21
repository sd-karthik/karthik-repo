//Sandeep S K
//13/11/2016
// count lead and trail for set and clear bits

#include<stdio.h>

#define MAX 50

void lead_set_bit(int num);  // function to set lead bits

void lead_clr_bit(int num);  // function to clear lead bits

void trail_set_bit(int num); //function to set trial bits

void trail_clr_bit(int num); //function to clear trial bits

extern int valid(char str[MAX]);

int main ()
{
  	char str[MAX];
	int i;
    unsigned int num;
    
    printf("enter number :\n");// number to be displayed
    fgets (str , MAX , stdin);                                                  
    num = valid(str); 
	
	showbit(num);

    lead_set_bit(num);

	lead_clr_bit(num);

	trail_set_bit(num);

	trail_clr_bit(num);

	return 0;
}

void lead_set_bit(int num)
{
        int i;
        int r;
        int count_set=0;           
        for (i=31 ; i>=0 ; i--){             
                r = num & (1 <<i ) ? 1 : 0;   //checks for 1, if 0 is encountered bit set begins
                if(r == 1)
                {
//                      printf("%d",r);
                        count_set++;
			
                }
                else
                {
                        break;

                }

        }
        printf ("\nlead  bits set:%d \n",count_set);
}


void lead_clr_bit(int num)
{
        int i;
        int r;
        int count_clr=0;
        for (i=31 ; i>=0 ; i--){
                r = num & (1 << i) ? 1: 0;  // checks for 0, if 1 is encountered bit clear begins
                if( r== 0)
                {
//                      printf("%d",r);
                        count_clr++;

                }
                else
                {
                        break;

                }

        }
        printf ("\nlead  bits clear:%d \n",count_clr);
}

void trail_set_bit(int num)
{
        int i;
        int r;
        int count_set=0;
        for ( i=0 ; i<32 ; i++){
                r= num & (1 << i) ? 1 : 0;// check for trail bits for 1 ,if 0 encountered bit set begins
                if(r == 1)
                {
//                      printf("%d",r);
                        count_set++;

                }
                else
                {
                        break;

                }

        }
        printf ("\ntrail  bits set:%d \n",count_set);
}

void trail_clr_bit(int num)
{
        int i;
        int r;
        int count_clr=0;
        for (i=0 ; i<32 ; i++)
        {
                r = num & (1 << i) ? 1 : 0; // check for trail bits for 0 , if 1 encountered bit clear begins
                if(r == 0)
                {
//                      printf("%d",r);
                        count_clr++;

                }
                else
                {
                        break;

                }

        }
        printf ("\ntrail  clear set:%d \n",count_clr);
}

