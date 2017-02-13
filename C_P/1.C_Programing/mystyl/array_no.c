#include<stdio.h>

#if ex1
#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
int array[] = {23,34,12,17,204,99,16};

int main()
{
	int d;
//	printf("%d", TOTAL_ELEMENTS);
	for(d=-1;d >= (TOTAL_ELEMENTS-2);d++)
		printf("%d\n",array[d+1]);

	return 0;
}
#endif

#if ex2
#include<stdio.h>

void OS_Solaris_print()
{
        printf("Solaris - Sun Microsystems\n");
}

void OS_Windows_print()
{
        printf("Windows - Microsoft\n");

}
void OS_HP-UX_print()
{
        printf("HP-UX - Hewlett Packard\n");
}

int main()
{
        int num;
        printf("Enter the number (1-3):\n");
        scanf("%d",&num);
        switch(num)
        {
                case 1:
                        OS_Solaris_print();
                        break;
                case 2:
                        OS_Windows_print();
                        break;
                case 3:
                        OS_HP-UX_print();
                        break;
                default:
                        printf("Hmm! only 1-3 :-)\n");
                        break;
        }

        return 0;
}

#endif

#if ex3
enum {false,true};

int main()
{
        int i=1;
        do
        {
                printf("%d\n",i);
                i++;
                if(i < 15)
                        continue;
        }while(false);
        return 0;
}
#endif

#if ex4
  int main()
  {
          while(1)
          {
                  fprintf(stdout,"hello-out");
                  fprintf(stderr,"hello-err");
                  sleep(1);
          }
          return 0;
  }
#endif

#if ex5

#define f(a,b) a##b
  #define g(a)   #a
  #define h(a) g(a)

  int main()
  {
          printf("%s\n",h(f(1,2)));
          printf("%s\n",g(f(1,2)));
          return 0;
  }
#endif

#if ex6
 int main()
  {
          int a=10;
          switch(a)
          {
                  case '1':
                      printf("ONE\n");
                      break;
                  case '2':
                      printf("TWO\n");
                      break;
                  defa1ut:
                      printf("NONE\n");
          }
          return 0;
  }
#endif

#if ex7
int main()
  {
      int* p;
      p = (int*)malloc(sizeof(int));
      *p = 10;
      return 0;
  }
#endif

#if ex8
int CountBits (unsigned int x )
  {
      static unsigned int mask[] = { 0x55555555,
          0x33333333,
          0x0F0F0F0F,
          0x00FF00FF,
          0x0000FFFF
          } ;

          int i ;
          int shift ; /* Number of positions to shift to right*/
          for ( i =0, shift =1; i < 5; i ++, shift *= 2)
                  x = (x & mask[i ])+ ( ( x >> shift) & mask[i]);
          return x;
  }
#endif

#if ex9
int main()
{
        float f=0.0f;
        int i;

        for(i=0;i<10;i++)
                f = f + 0.1f;

        if(f == 1.0f)
                printf("f is 1.0 \n");
        else
                printf("f is NOT 1.0\n");

        return 0;
}
#endif

#if ex10
int main()
{
        int a = 1,2;
        printf("a : %d\n",a);
        return 0;
}
#endif 

#if ex11
int main()
{
        int i=43;
        printf("%d\n",printf("%d",printf("%d",i)));
        return 0;
}
#endif

#if ex12
void duff(register char *to, register char *from, register int count)
  {
      register int n=(count+7)/8;
      switch(count%8){
      case 0: do{ *to++ = *from++;
      case 7:  *to++ = *from++;
      case 6: *to++ = *from++;
      case 5: *to++ = *from++;
      case 4: *to++ = *from++;
      case 3: *to++ = *from++;
      case 2: *to++ = *from++;
      case 1: *to++ = *from++;
              }while( --n >0);
      }
  }
#endif

#if ex13
int CountBits(unsigned int x)
  {
      int count=0;
      while(x)
      {
          count++;
          x = x&(x-1);
      }
      return count;
  }
#endif

#if ex14
int main()
  {
   float a = 12.5;
   printf("%d\n", a);
   printf("%d\n", *(int *)&a);
   return 0;
  }
#endif

#if ex15
int main()
  {
      int a=1;
      switch(a)
      {   int b=20;
          case 1: printf("b is %d\n",b);
                  break;
          default:printf("b is %d\n",b);
                  break;
      }
      return 0;
  }
#endif

#if ex16
 #define SIZE 10
  void size(int arr[SIZE])
  {
          printf("size of array is:%d\n",sizeof(arr));
  }

  int main()
  {
          int arr[SIZE];
          size(arr);
          return 0;
  }
#endif

#if ex17
 void Error(char* s)
  {
      printf(s);
      return;
  }

  int main()
  {
      int *p;
      p = malloc(sizeof(int));
      if(p == NULL)
      {
          Error("Could not allocate the memory\n");
          Error("Quitting....\n");
          exit(1);
      }
      else
      {
          /*some stuff to use p*/
      }
      return 0;
  }
#endif

#if ex18
int main()
  {
      char c;
      scanf("%c",&c);
      printf("%c\n",c);

      scanf(" %c",&c);
      printf("%c\n",c);

      return 0;
  }
#endif

#if ex19
char t[]={
      0,0,0,0,0,0,12,18,33,63,
      33,33,62,32,62,33,33,62,30,33,
      32,32,33,30,62,33,33,33,33,62,
      63,32,62,32,32,63,63,32,62,32,
      32,32,30,33,32,39,33,30,33,33,
      63,33,33,33,4,4,4,4,4,4,
      1,1,1,1,33,30,33,34,60,36,
      34,33,32,32,32,32,32,63,33,51,
      45,33,33,33,33,49,41,37,35,33,
      30,33,33,33,33,30,62,33,33,62,
      32,32,30,33,33,37,34,29,62,33,
      33,62,34,33,30,32,30,1,33,30,
      31,4,4,4,4,4,33,33,33,33,
      33,30,33,33,33,33,18,12,33,33,
      33,45,51,33,33,18,12,12,18,33,
      17,10,4,4,4,4,63,2,4,8,
      16,63
      };

  int main(int argc,char** argv)
  {

      int r,pr;
      for(r=0;r<6;++r)
          {
          char *p=argv[1];

          while(pr&&*p)
              {
              int o=(toupper(*p++)-'A')*6+6+r;
              o=(o<0||o>=sizeof(t))?0:o;
              for(pr=5;pr>=-1;--pr)
                  {
                  printf("%c",( ( (pr>=0) && (t[o]&(1<<pr)))?'#':' '));

                  }
              }
          printf("\n");
          }
      return 0;
  }
#endif

#if ex20
#define SIZEOF(arr) (sizeof(arr)/sizeof(arr[0]))

  #define PrintInt(expr) printf("%s:%d\n",#expr,(expr))
  int main()
  {
      /* The powers of 10 */
      int pot[] = {
          0001,
          0010,
          0100,
          1000
      };
      int i;

      for(i=0;i<SIZEOF(pot);i++)
          PrintInt(pot[i]);
      return 0;
  }

#endif

#if ex21
int main()
{
	unsigned long long c = 11123456789;
	unsigned long long *a = &c;
//	unsigned int b = 10;	

/*	if(a>b)
		printf("a");
	else
		printf("b");
*/
	int b = printf("%n\n",a);
	printf("%d", b);
	return 0;
}
#endif
