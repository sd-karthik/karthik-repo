#include <stdio.h>

int main()
{

	int i=0,j=0,k=0,l=0;
	int n=0 , m=0;
	printf("Enter the matrix size\n");
	scanf("%d", &n);

	int a[n][n];
	for(i= 0;i < n; i++) {
			for( j = 0; j < n; j++) {
					 a[i][j] = ++k;
			}
	}
	for(i= 0;i < n; i++) {
			for( j = 0; j< n; j++) {
					printf("%d " , a[i][j]);// = i+j+1;
			}
	}
	printf("\n");

	

	if(n <= 0 ) {
			printf("Enter matrix size greater than 0\n");
			return 0;
	}
	for(i = 0; i<n; i++ ) {
		if(i == n/2) {
			if( n%2 != 0) {
				printf("%d", a[i][i]);
			}
			break;
		}

		for(j = i; j < n-i; j++ ) {
				printf("%d ", a[i][j]);
		}

		l = i + 1;
		--j;

		for(k = i; k < (n - i - 1 ) ; k++) {
			printf("%d ", a[l++][j]);
		}

		for(m = j ; m > i; m--) {
			printf("%d ", a[k][m-1]);
		}

		for(l = j; l > i + 1;l--) {
			printf("%d ", a[--j][i]);
		}
	}
	printf("\n");
	return 0;
}
