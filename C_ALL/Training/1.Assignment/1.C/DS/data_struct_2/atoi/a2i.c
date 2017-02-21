#include "header.h"

int a2i(char* num)
{
	int i;
	int n;
	int flag=0;
	n = 0;

	if(num[0]=='+') {
		flag=0;
	}

	else if(num[0]=='-') {
		flag=1;
	}

	else if((num[0] >= '0') && (num[0] <= '9')){ 
			n = n * 10 + num[0] - '0';
		}	

	for(i = 1; i < str_len(num)-1; i++) {

		if ((num[i] >= '0') && (num[i] <= '9')) 
			{
				n = n * 10 + (num[i] - '0');
			}

		 else {
			printf("\nInvalid input!\nTry again\n");	
			exit(0);
		}
	}	

	if(n >= 2147483647 || n <= -2147483648)
	{
		printf("Outof Range!!\n Try again\n");
	} else {

		if (flag) {
			return (~(n) + 1);
		} 

		else {
		return n;
		}
	}
}
