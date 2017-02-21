#include<stdio.h>                                                               
               
#if 0                                                                           
int main()                                                                      
{                                                                               
    int arr[5] = {10, 20, 30, 40, 50};
	int i;                                                              
                                                                                
    printf("Size of integer in this compiler is %u\n", sizeof(int));            
    for (i=0; i<5; i++)                                                         
        printf("Address arr[%d]= %d is %p\n", i, arr[i], &arr[i]);                          
                                                                                
    return 0;                                                                   
}                                                                               
#endif
                                                                 
#if 0                                                                           
int main(void)                                                                  
{                                                                               
    int b = 10;                                                                 
    int a[3] = {1, 2, 3};                                                       
                                                                                
    printf("b = %d \n",b);                                                      
    a[3] = 95;                                                                  
    printf("b = %d \n",b);                                                      
                                                                                
    return 0;                                                                   
}                                                                               
#endif 

#if 0                                                                         
int main(void)                                                                      
{                                                                               
  	int arr[2];         
	int i;                                                 
    for(i = 0; i<2; i++){
		scanf("%d", &arr[i]);
		printf("\n");
	}

    printf("%d\n", arr[0]);                                                     
    printf("%d\n", arr[1]);                                                     
    printf("%d\n ", arr[2]);                                                    
    printf("%d\n", arr[3]);                                                     
    printf("%d\n ", arr[10]);                                                      
    printf("%d\n ", arr[12]);                                                      
    printf("%d\n ", arr[15]);                                                      
    printf("%d\n ", arr[31]);                                                      
                                                                                
  return 0;                                                                     
}                                                                               
#endif                                                                          
     
#if 0                       
int main()                                                                      
{                                                                               
    int arr[2] = {10, 20, 30, 40, 50};                                          
    printf("%d\n", arr[2]);                                                     
    return 0;                                                                   
}                                                                               
#endif         

#if 0                                                                           
int main()                                                                      
{                                                                               
    //void arr[10];                                                             
    void *arr[10];                                                              
    return 0;                                                                   
}                                                                               
#endif

#if 1
int main()
{
	int a[][2] = {{1,2},{3,4}};
	printf("%d\n", a[1][1]);
	return 0;
}
#endif    
