# include <stdio.h>

int main()
{
		int num = 6;
		int count = 0;
		int i ;
		for ( i =31 ; i>=0; i--) {
				if(!(num ^ (1<<i))) {
						count ++;
				}
				if(count > 1) 
						break;
		}
		if(count == 1) 
				printf("Power of 2\n");
		else
		printf("Not power of two \n");
		return 0;
}

