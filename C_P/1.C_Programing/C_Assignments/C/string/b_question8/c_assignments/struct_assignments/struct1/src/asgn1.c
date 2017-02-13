#include<stdio.h>
#pragma pack(1)
#if 0 

struct frame
{
	unsigned int gfc:4;   
	char vpi:8; 
	short int vci:12;
	char pti:3;
	char  cip:1;
	unsigned int hec:8; 

	double a:6; 
};
 
int main()
{
struct frame a1;
printf("%d \n",sizeof(a1));
}

#endif

#if 0

struct frame
{
	unsigned int options;
	short int urgent;
	short int checksum;
	short int window;	
	unsigned int code_bits:6;
	unsigned int reserved:6;
	unsigned int header_len:4;
	unsigned int ack_num;
	unsigned seq_num;
	short int dest_port;
	short int sou_port;
}a1;

int main()
{
	printf("%d\n",sizeof(a1));
	return 0;
}
#endif

#if 1

struct frame
    {
	char padding;
	unsigned int options:24;
	unsigned int dest_ip;
	unsigned int src_ip;
	short int header_cs;
	char protocol;
	char ttl;
	unsigned int fr_off:12;
	char flags:4;
	short int identif;
	short int to_len;
	char ser_typ;
	short int header_len:4;
	short int ver:4;
	}a1;

int main()
{
	printf("%d \n",sizeof(a1));
	return 0;
}

#endif





#if 0

int main()
{
    struct emp
    {
        char name[20];
        float sal;
    };
    struct emp e[10];
    int i;
    for(i=0; i<=1; i++)
        scanf("%s %f", e[i].name, &e[i].sal);
    
    for(i=0; i<=1; i++)
        printf("%s %f", e[i].name, e[i].sal);
return 0;
}
#endif


#if 0                                                                           
                                                                                
struct frame                                                                    
{                                                                               
  	unsigned int i:30;                                                          
    unsigned char vpi:3;                                                                 
    unsigned int z:8;
	unsigned int y;                                                        
                                                                   
                                                                    
                                                           
                                                                                
                                                               
};                                                                              
                                                                                
int main()                                                                      
{                                                                               
struct frame a1;                                                                
printf("%d \n",sizeof( a1));                                                     
}

#endif  
