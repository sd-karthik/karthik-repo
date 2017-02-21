// Sandeep S K
//14/11/16
//macros 

#include<stdio.h>

#define MAX 50

extern int valid(char str[MAX]);\

#define maxmin(num1,num2)      \
	int i;\
	if(!(num1 ^ num2))\
	printf("numbers are equaol\n");\
else\
	{	for(i=31 ; i>=0 ; i--){       \
       		if((num1 >> i) ^ (num2 >> i)){\
        	if(((num1 >> i) & 1)) {   \
		printf("num1 greater\n");   \
                printf("num2 smalller\n");break;} \
		else{  \
                printf("num1 smaller\n");   \
                printf("num2 greater\n");break;}}}} 

#define set_right(num1) \
	int l;	\
	for(l=0 ; l<=31 ; l++){	\
		if(!(num1 & (1 << l))){\
		showbit(num1 | (1 << l));break;\
		}}

#define clr_right(num1) \
        int m;\
        for(m=0 ; m<=31 ; m++){     \
                if((num1 >> i) & 1){\
                showbit(num1 & ((~0) << m));break;\
                }}

#define set_left(num1) \
        int n;\
        for(n=31 ; n>=0 ; n--){     \
                if(!((num1 >> n))){\
	showbit(num1 | (1 << n));break;\
                }}

#define clr_left(num1) \
        int p;  \
        for(p=31 ; p >= 0 ; p--){     \
		if(((num1 >> p) & 1)){\
                showbit(num1 & (~(1 << p)));break;\
                }}

#define set_bits(num1,s,d) \
	int q;\
	for (q=31 ; q>=0 ; q--){\
		if(q>=s && q<=d)\
		printf("1");\
		else\
		printf("0");}

#define clr_bits(num1,s,d) \
        int r;\
        for (r=31 ; r>=0 ; r--){\
                if(r>=s && r<=d)\
                printf("0");\
                else\
                printf("1");}


#define toggle_bits(num1,s,d) \
showbit(num1);printf("\n"); showbit(num1 ^ ((~((~0) << (d-s+1))) << s));\
	

int main()
{   
	char str[MAX];
	unsigned int num1;
	unsigned int num2;
	unsigned int s;
	unsigned int d;

	printf("enter num1\n");
	fgets (str , MAX , stdin);                                                  
	num1 = valid(str);   // num1 to be manipulated

	printf("enter num2\n");
	fgets (str , MAX , stdin);                                                  
	num2 = valid(str); //number to be to manipulated

	maxmin(num1,num2);//to perform greater of two numbers
	showbit(num1);
	
	printf("right most bit set to 1\n");
	set_right(num1); // set right clear bit to 1
	
	printf("clear right most bit\n");
	clr_right(num1);// clear right set bit to 0
	
	printf("set left most bit \n");
	set_left(num1);// set left clear bit to 1
	
	printf("clear left most bit\n");
	clr_left(num1);// clear left set bit to 1

	printf("give s and d\n");
	fgets (str , MAX , stdin);                                                  
    s = valid(str); // set source position 
    
	fgets (str , MAX , stdin);                                                  
    d = valid(str); // set destination position
	
	printf("set bit position from s to d\n");
	set_bits(num1,s,d);// sets the bits from s position to d position 
	printf("\n");
	
	printf("clears bits from s to d\n");
	clr_bits(num1,s,d);// clears the bit from s position to  d position
	printf("\n"); 
	
	printf("toggles bits from s to d\n");
	toggle_bits(num1,s,d);// toggles the bits from s poition to d position

	return 0;
}
