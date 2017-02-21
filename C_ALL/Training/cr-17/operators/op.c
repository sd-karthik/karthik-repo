#include<stdio.h>
#include<stdlib.h>
#if 1
//prgm1:program to define modulus 
int main()
{	
//	printf("%f", 56 % 4.2);
	printf("%d", -3 % 7 -2);
}
#endif
#if 0
//prgm2: prgm to define relational operators 
int main()
{
	float x = 3.4;
	float y = 4.4;

	if((x > y) || x)	
//	if(x == y)	
//	if(y > x)
	printf("%f", x);
	else
	printf("nothing");
}
#endif
#if 0
//prgm3:prgm to define increment and decrement
int main()
{
	int a = 1;

	printf("%d\n %d\n %d\n %d\n %d\n ", ++a,a++,a ,++a,a++);
//	printf("%d", (++a)++);
}
#endif
#if 0
//prgm4:prgm to define bitwise operators
int main()
{
	printf("%d", -6 >> 1);
	printf("%f",3.4&2);

}
#endif
#if 0                                                                           
//prgm 4:program to define if else construct                                           
int main()                                                                      
{                                                                               
    int a = 4;                                                                  
//  int a =2;                                                                   
//  int b = 2;                                                                  
    int b = 4;                                                                  
                                                                                
//  if(7 = a)                                                                   
//  if(a - b)                                                                   
    if(a > b)                                                                   
    {                                                                           
        printf("a:%d", a);                                                      
    }else{                                                                      
        printf("%d", b);                                                        
                                                                                
}                                                                               
}                                                                               
#endif                                     
#if 0
//prgm5:prgm to define sizeof operator

int main()
{

//	printf("%d",sizeof(printf("sizeOF")));
//	printf("%d", sizeof(NULL));
	printf("%d", sizeof(main));
//	printtf("%d",sizeof(printf(sizeOF)));
}
#endif
#if 0   
//prgm6:prgm to define switch                                            
int main()                                                                      
{                                                                               
    int choice;                                                                 
    int a = 2;                                                                  
    int b = 4;                                                                  
                                                                                
    printf("enter the choice\n");                                               
    printf("choice:\n1.\n2.\n3.\n4.");                                          
    scanf("%d",&choice);                                                        
    switch(choice){                                                             
                                                                                
    case 1:printf("nothing");                                                   
//          break;                                                              
                                                                                
    case 3: case 2:printf("%d", a+b);                                           
//                  break;                                                      
                                                                                
    case 4:printf("%d", a);                                                     
                                                                                
// default: printf("default");                                                  
//          break;                                                              
    }                                                                           
}                                                                               
#endif                                                                          
#if 0                         
//prgm 7: prgm to define typedef                                                  
int main()                                                                      
{                                                                               
    typedef int points;                                                         
//  typedef static points;                                                      
    points x = 5;                                                               
    printf("%d ", x);                                                           
    return 0;                                                                   
}                                                                               
#endif
#if 0                           
                                                
typedef struct structc_tag                                                      
{                                                                               
   char        c;                                                               
   double      d;                                                               
   int         s;                                                               
} str;                                                                          
                                                                                
typedef struct structd_tag                                                      
{                                                                               
   double      d;                                                               
   int         s;                                                               
   char        c;                                                               
} str2;                                                                         
                                                                                
int main()                                                                      
{                                                                               
    printf("%d", sizeof(str));                                                  
    printf("%d", sizeof(str2));                                                 
}                                                                               
#endif
#if 0
//prgm to define increment using float
int main()
{
	char x = 's';
//	float x = 2.44;
	
	x++;

	printf("%c",x);
//	printf("%f", x);
}
#endif                                                              
