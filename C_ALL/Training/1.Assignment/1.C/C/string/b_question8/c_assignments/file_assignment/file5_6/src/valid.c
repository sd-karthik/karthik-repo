#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int valid(char s[30])
{	int i;
	char n[30];
	int res=0;
	int flag;
	int ans;
	int t=0;
	flag=2;
    if (s[0] == '+'){
		t++;
		flag = 1;
	}                                                       
    if (s[0] == '-')
	{
	t++;
	flag=0;	
	}      
	for(i=t ; i < strlen(s)-1; i++){
		if  ((s[i] >= '0' && s[i] <= '9'))
			{
		    res = (res *  10) + (s[i] - '0');
			}
		else
			{
			printf("invalid input\n");
			fgets(n,50,stdin);
			res=valid(n);
			return res;
			}
		}
	(flag == 1)?( res = res) : (flag == 0) ? (res = (~res)+1) : (flag=2);
	if(res >= -214745682 &&  res <= 214745681)
	return res;
	else 
	{
	printf("input  out of range \n");
    fgets(n,50,stdin);                                                  
    res=valid(n);                                                       
    return res;
	}
	}



