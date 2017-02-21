//a2i.c

//ASCII to integer conversion

#include "header.h"

int a2i(char *num)
{
	int i;
	int n = 0; 

    for(i = 0; i < str_len(num); i++) {
        if (((num[i] >= '0') && (num[i] <= '9')) || (num[i] == '-')) {
            if (num[i] != '-') {
                n = n * 10 + (num[i] - '0');
            }
        } else {
            break;
        }
    }
/*
	if(n >= 2147483647 || n <= -2147483648)
	{
		printf("Outof Range!!\n Try again\n");
	} else {
*/
		if (num[0] == '-') {
			return (~(n) + 1);
		} 
		else {
			return n;
		}
//	}
}
