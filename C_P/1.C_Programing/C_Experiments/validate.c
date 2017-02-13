/* Program to validate the input is a valid number or not */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int validate(char num[])
{
	int i;
	int n;

	n = 0;

	if(num[0]=='+') {
		flag=0;
	}

	else if(num[0]=='-') {
		flag=1;
	}

	for(i = 0; i < strlen(num); i++) {
		if (((num[i] >= '0') && (num[i] <= '9')){
			{
				n = n * 10 + (num[i] - '0');
			}
		} else {
			printf("Invalid input!");
			exit(0);
		}
	}	

	if (num[0] == '-') {
		return (~(n) + 1);
	} else {
		return n;
	}
}
