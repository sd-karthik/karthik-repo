#include<stdio.h>

#define MAX_LEN 5
#define MEM_ALLOC(str) str = (char *) malloc(sizeof(char) * MAX_LEN);
#define VALID_MALLOC(str) if (!(str)) { \
					printf("Malloc failed!\n");\
					exit(1);\
					}
#define SWAP(num1, num2) num1 = num1 + num2;\
			    num2 = num1 - num2;\
			    num1 = num1 - num2;

