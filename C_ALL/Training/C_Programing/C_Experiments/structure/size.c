#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 1
#pragma pack (1)
//program to print size of structure
struct format 
{

	int HEC:8;
	int CLP:1;
	int PTI:3;
	int VCI:16;
	int VPI:8;
	int GFC:4;
//	int HEC:8;
};



int main()
{
	printf("%d\n", sizeof(struct format));

}
#endif
