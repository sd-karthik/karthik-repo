//atoi.c

//ASCII to Integer conversion

//DOC : 15/12/16

#include "myheader.h"

int my_atoi(char num[])
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

	if (num[0] == '-') {
		return (~(n) + 1);
	} else {
		return n;
	}
}
