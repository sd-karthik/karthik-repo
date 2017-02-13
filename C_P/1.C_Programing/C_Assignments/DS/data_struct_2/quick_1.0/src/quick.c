//quick.c

// Implimentation of quick sort algorithm

//D0C :18/12/16

#include "header.h"

void quick_sort(int arr[], int low, int high) {
	int pivot;
	int i;
	int j;

	if (low < high) {
		pivot = low;
		i = low;
		j = high;
		while (i < j) {
			while ((arr[i] <= arr[pivot]) && (i <= high)) {
				i++;
			}

			while ((arr[j] > arr[pivot]) && (j>= low)) {
				j--;
			}

			if (i < j) {
				SWAP(arr[i], arr[j]);
			}
		}
		SWAP(arr[j], arr[pivot]);
		quick_sort(arr, low, j-1);
		quick_sort(arr, j+1, high);
	}
}

int main(void) {
	int arr[100];		// Array of numbers
	int num;		// Number of elements
	int i;
	int opt;		// Order of sorting
	char *temp;

	MEM_ALLOC(temp);
	VALID_MALLOC(temp);

	printf("Enter the number of elements: ");
	fgets(temp, MAX_LEN, stdin);
	num = a2i(temp);
	free(temp);

	printf("Enter the elements:\n");
	for (i = 0; i < num; i++) {
		MEM_ALLOC(temp);
		VALID_MALLOC(temp);
		fgets(temp, MAX_LEN, stdin); 
		arr[i] = a2i(temp);
		free(temp);
	}

	printf("Enter the order of sorting:\n");
	printf("1. Ascending order\n2. Descending order\n");
	scanf("%d", &opt);

	quick_sort(arr, 0, num);

	printf("Elements after sorting:\n");
	if (opt == 1) {
		for (i = 1; i <= num; i++) {
			printf("%d\t", arr[i]);
		}
	} else if (opt == 2) {
		for (i = num; i >= 1; i--) {
			printf("%d\t", arr[i]);
		}
	} else {
		printf("Invalid input!\n");
		exit(1);
	}
		
	printf("\n");

	return 0;
}
