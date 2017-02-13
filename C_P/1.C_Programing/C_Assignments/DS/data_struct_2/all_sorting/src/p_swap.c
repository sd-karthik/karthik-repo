#include "header.h" 

void swap(int *p1, int *p2)
{ 
	*p2 = *p1 + *p2;
	*p1 = *p2 - *p1;
	*p2 = *p2 - *p1;

}
