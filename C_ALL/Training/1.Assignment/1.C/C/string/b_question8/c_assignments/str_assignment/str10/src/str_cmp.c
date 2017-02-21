#include "header1.h" 

int str_cmp(char *sbu,char *dbu,int l1, int l2)
{ 
	int flag = 2;  
    int i;	
	if(l1>l2)
	return 1;
	else if(l2>l1)
	return -1;
	
	else 
	{	
		while (*sbu != '\0')
			{
				if((*sbu == *dbu) || ((*sbu - 'a') == (*dbu - 'A')) ||
					((*sbu - 'A') == (*dbu - 'a')))
					
				
				{
						flag = 0;
	
				}
				else if(*sbu  > *dbu)
					return 1;
				else if(*sbu < *dbu)
					return -1;
			sbu++;
			dbu++;								
			}
		
		return flag;	
	}

}
