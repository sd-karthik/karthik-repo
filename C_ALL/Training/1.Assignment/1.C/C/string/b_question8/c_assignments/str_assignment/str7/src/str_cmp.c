#include "header1.h" 

int str_cmp(char *sbu,char *dbu)
{ 
	int flag = 2;  
    int i;	
	

		while (*sbu != '\0')
			{
				if(*sbu == *dbu)
					flag=0;
				else if(*sbu  > *dbu)
					return 1;
				else if(*sbu < *dbu)
					return -1;
			sbu++;
			dbu++;								
			}
		return flag;	


	


}
