#include <stdio.h>

int add (int num1, int num2);

int main()
{
    int num1 = 10 , num2 = 20 , sum ;
    sum = add(num1, num2 );
    
    printf("sum of %d and %d = %d \n",num1,num2,sum);
    printf(" sum of %d and %d = %d \n",num1,num2,add(num1,num2));
    printf("sum of 3=%d\n",add0_3());
    printf("sum of 3=%d\n",add1_3());
    printf("sum of 3=%d\n",add2_3());
    printf("sum of 3=%d\n",add3_3());
    return 0;
}


int add (int n1,int n2)
{
   int res;
   res=n1+n2;
   return res;
   // return(n1+n2);
}

int add0_3()
{
   int sum = 0 ,num;
    for ( num=1;num<50;++num)
   {
      if(num%3==0)
         sum+=num;
   }
  return sum;
}
 
int add1_3()
{
   int sum = 0 ,num=1;
    for ( ;num<50;++num)
   {
      if(num%3==0)
         sum+=num;
   }
  return sum;
}

int add2_3()
{
   int sum = 0 ,num=1;
    for ( ;num<50;)
   {
      if(num%3==0)
         sum+=num;
      ++num;
   }
  return sum;
}

int add3_3()
{
   int sum = 0 ,num=1;
    for ( ; ;)
         { 
          if(num<50)
         {
           if(num%3==0)
            sum+=num;
         
             ++num;         
      } 
         else
       break;
         
    }
  return sum;
  }  
