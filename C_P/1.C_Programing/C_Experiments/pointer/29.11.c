#include<stdio.h>
                                                                
 
void main()
{

 //int mat[ROWS][COLS] = {{1, 2, 3},
 //                             {4, 5, 6},
 //                             {7, 8, 9},
 //                             {10, 11, 12}};
//	
//    int** pmat = (int **)mat;
//	int (* arr)[COLS]= mat;

	char *arr1[] = { "sun", "mon", "tu"};
	char (*arr2)[] = { "sun", "mon", "tue"};	
	char arr3[][4] = { "sun", "mon", "tue"};
    char **p1 =(char **) arr3;

	printf("sizeof *arr1 = %d\n", sizeof(arr1));
    printf("sizeof *arr2 = %d\n", sizeof(arr2));
    printf("sizeof **p1 = %d\n", sizeof(p1));
	printf("sizeof arr3 = %d\n", sizeof(arr3));
	
	printf(" *arr1[0]=%c\n",*arr1[0]);
	printf(" *arr1[1]=%c\n",*arr1[1]);
	printf(" *(*arr1+1)=%c\n",*(*arr1+1));
	printf(" (*arr2)[1]=%c\n",(*arr2)[1] );
	printf("(*arr2)[0] = %c\n", (*arr2)[0]);
	printf(" %s\n", *(arr1+1));
	
//	printf("%d\t", (*arr)[0]);
//    printf("&matrix[0][0] = %x\n", &mat[0][0]);
//    printf("&pmat[0][0] = %x\n", &pmat[0][0]);
//    printf("*mat[0] = %x\n", *mat[0]);

}
