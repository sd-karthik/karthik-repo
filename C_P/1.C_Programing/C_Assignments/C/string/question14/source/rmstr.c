#include "header.h" 

char *rmstr(char *sbu,char *dbu)
{ 
	int j=0;  
    int i=0;
	int k=0;
	int x=0;
		printf("sbu:%s\n",sbu);
		printf("dbu:%s\n",dbu);	
		while( *(sbu+i+1) !='\0'){
			while((*(dbu+j) == *(sbu+i)) && (*(dbu+j+1) != '\0')){
				i++;
				j++;
				}
			if (j == str_len(dbu)){
				j=0;
//				printf("i:%d",i);
				}
			if (j > 0 && j < str_len(dbu)){
				x=i;
				i = i-j;
			
				while(i < x){
					*(sbu+k)=*(sbu+i);
					i++;
					k++;					
				}
				j=0;
			}
		if((*(dbu+j) != *(sbu+i)))   {
				*(sbu+k)=*(sbu+i);		
				k++;
				i++;
		}
	}
		*(sbu+k)='\0';
		
		return sbu;	
	

}
