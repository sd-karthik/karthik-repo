#include<stdio.h>                                                               
#include<stdlib.h>                                                              
#include<string.h>                                                              
#define MAX 50                                                                  
int valid(char s[30]);                                                          
struct EH {                                                                     
unsigned char e_ident[16];                                                      
short e_type;                                                                   
short e_machine;                                                                
int e_version;                                                                  
unsigned int e_entry;                                                           
};                                                                              
  
