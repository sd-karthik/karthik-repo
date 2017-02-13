//main.c

//Insertion sorting

//DOC: 08/12/16

#include"header.h"

int main(void)
{
	int arr[MAX];	//array
	char cnum;		
	char csize;
	int	size;	
	int j;
	int i;	

	printf("Insertion sorting\n");
	printf("Enter the size of array\n");
//	fgets(csize, MAX, stdin);	//size of array
//	size = a2i(csize);	//atoi conversion of size
	scanf("%d", &size);	

	printf("Enter the elements\n");	//input of array elements
	for(i = 0; i < size ; i++) {
//		fgets(cnum, MAX, stdin);
//		arr[i] = a2i(cnum);
		scanf("%d", &arr[i]);
	}

	insert(arr,size);	//insertion sorting function call
	
	//printing of sorted array
	printf("The sorted array\n");

	for(i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
