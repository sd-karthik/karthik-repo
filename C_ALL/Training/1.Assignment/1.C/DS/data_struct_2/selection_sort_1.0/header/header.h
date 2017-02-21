//header.h

//Header file for the selection sort 

#ifndef _header_h
	#define _header_h 1

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37:m" 
#define RESET "\x1b[0m"


void selection(int arr[], int);
int a2i(char num[]);
int str_len(char * );
void swap(int *, int *);

#endif
