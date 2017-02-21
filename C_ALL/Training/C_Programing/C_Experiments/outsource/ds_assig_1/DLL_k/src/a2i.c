//a2i.c

//ASCII to integer conversion program

#include"header.h"

int a2i(char s[30])
{	
	int i;
	char num[30];
	int res = 0;
	int flag = 2;
	int ans;
	int t = 0;
	
    if (s[0] == '+'){
		t++;
		flag = 1;
	}                                                       
    if (s[0] == '-')
	{
	t++;
	flag=0;	
	}      

	for(i = t ; i < str_len(s)-1; i++){
		if  ((s[i] >= '0' && s[i] <= '9'))
			{
		    res = (res *  10) + (s[i] - '0');
			}
		else
			{
			printf("invalid input\nTry the valid number again\n");
			fgets(num, MAX, stdin);
			res = a2i(num);
			return res;
			}
		}

	(flag == 1)?( res = res) : (flag == 0) ? (res = (~res)+1) : (flag=2);
	if(res >= -214745682 &&  res <= 214745681)
	return res;

	else 
	{
	printf("input  out of range \n");
    fgets(num, 50, stdin);                                                  
    res = a2i(num);                                                       
    return res;
	}
}



