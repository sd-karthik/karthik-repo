#include<stdio.h>

//PRAGMA PACK
#if 0
#pragma pack(push,1)                                                            
struct tag{                                                                     
	int a:20;                                                                   
	char b:4;                                                                   
}tag1;                                                                      
#pragma pack(pop)                                                               

struct tag1{                                                                    
	int a:20;                                                                   
	char b:4;                                                                   
}tag2; 

int main(void)                                                                  
{                                                                               
	printf ("size with pack %d\n", sizeof(tag1));                                                
	printf ("size without pack %d\n", sizeof(tag2));                                                
}
#endif

//ATTRIBUTE
#if 0
struct tag{                                                                     
	short a;                                                                    
	char b;                                                                     
	int c;                                                                      
}__attribute__((packed));                                                       

int main(void)                                                                  
{                                                                               
	printf ("size of structure is %d\n", sizeof(struct tag));                                            
}
#endif

#if 0                                                                          
struct tag{                                                                     
    char a;                                                                     
    int b __attribute__((packed));                                              
    short c;                                                                    
};                                                                              
int main(void)                                                                  
{                                                                               
    printf("%d",sizeof(struct tag));                                            
}                                                                               
#endif

#if 0
void School() __attribute__((constructor(101)));
void College() __attribute__((constructor(102)));                                

void College() __attribute__((destructor(101)));                               
void School() __attribute__((destructor(102)));     

void main(){                                                                    
	    printf ("\nI am in main");                                                 
}                                                                             
                                                                                
void School(){                                                                  
	    printf ("\nI am in School");                                               
}                                                                               
                                                                                
void College(){                                                                 
	    printf ("\nI am in College");                                                
}                                                                               
#endif 
                                                    

//BITFIELDS
#if 0
//#pragma pack(1)
struct tag{                                                                     
	int a:4;                                                                    
	int b:3;                                                                    
    int: 0;    
	int y:24;                                                                 
}st1;                                                                           
int main(void)                                                                  
{                                                                               
	printf("size of the structure is %d\n",sizeof(st1));                                                   
}  
#endif
