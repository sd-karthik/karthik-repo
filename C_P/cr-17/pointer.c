#include <stdio.h> 

#if 0
int main(void) 						//Declaration and Initialization
{ 
	char ch = 'c'; 
	char *chptr = &ch; 

	int num = 20; 
	int *intptr = &num; 

	float flt = 1.20000; 
	float *fptr = &flt; 

	char *ptr = "I am a string"; 

	printf("\n [%c], [%d], [%f], [%c], [%s]\n", *chptr, *intptr, *fptr, *ptr, ptr);

	return (0); 
}
#endif

#if 0
int main(void)						//Wild pointer
{
	 short *p;

	 printf("%p \n",p);

	 return (0);
}
#endif

#if 0
int main(void)						//Dangling pointer
{
	 int *p;

	 if(1)
	 {
		int x=10;
		p=&x;
		printf("\n%d",*p);
     }
	 printf("%d \n",*p);
	 return (0);
}
#endif

#if 0

int main(void)						//Dereferencing void pointer
{
	int inum = 8;
	float fnum = 67.7;
	void *ptr;

	ptr = &inum;  
	printf("\nThe value of inum = %d",*((int*)ptr));

	ptr = &fnum;  
	printf("\nThe value of fnum = %f",*((float*)ptr));

	return(0);
}
#endif


#if 0										// Double pointer

int main (int argc, char **argv)
{										 /* program to print arguments
			 				 							from command line*/
	int num;
	int i;
	
	printf("argc = %d\n\n",argc);
	
	for (i = 1; i <= argc - 1; ++i){
		printf("argv[%d]: %s\n", i, *(argv + i));
	}

	return (0);
}
#endif

#if 0 //Pointer to array 

#include <stdio.h>
int main( )
{
	/*Pointer to array */
	int (*p)[7];
	int i;
	/*Array declaration*/
	int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;

	/* Assigning the address of val[0] to pointer*/
	p = val;
	
	for(i = 0 ; i < 7 ; i++ )
	{
		printf("val[%d]: value is %d and address is %p \n", i, *(*(p) + i), p[i]);
		
	}
	return 0;
}
#endif

#if 1 // Array of pointers

int main( )                                                                     
{     
	int i;
	/*array of pointer */                                                       
	int *p[7];                                                                
	
	/*Array declaration*/                                                       
	int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;                               
			                                                                               
	/* Assigning the address of elements to array of pointers*/                             
	p[0] = &val[0];
	p[1] = &val[1];
	p[2] = &val[2];
	p[3] = &val[3];
	p[4] = &val[4];
	p[5] = &val[5];
	p[6] = &val[6];
	
	for (i = 0 ; i < 7 ; i++ )                                             
	{                                                                           
		printf("val[%d]: value is %d and address is %p \n", i, *p[i], p[i]);       
	
	}                                                                           
	
	return 0;                                                                   
}       

#endif



