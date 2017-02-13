#include<stdio.h>
#include<stdlib.h>

#if 0
void main(void)
{

	int *p;
	int (*ptr)[5];
	int a[10]={1,2,3,4,5};
	int i;
	int num=0;

//	printf("Enter 5 elements\n");
	
//	for(i = 0; i < 5; i++) {
//		a[i] = getchar();
//	}

	p = a;
	ptr = &a;
	
	printf("p=%p\tptr=%p\np++=%p\tptr++=%p\n", p, ptr, p+1, ptr+1);
	printf("%d%d%d\n", num, num++);
}
#endif

#if 0

void main()
{
	int a[3][2] = { 10,20,30,40,50,60};
	
	printf("&a+1=%p\t*(a+1)=%p\n*(*(a+1))=%d\t", &a+1,*(a+1), *(*(a+1)));
	printf("*(*(a+1)+1)=%d\na=%p\t&a=%p\n",*(*(a+1)+1), a, &a);
	printf("so*(a+1)=%d\tso(a)=%d\n", sizeof(*(a+1)), sizeof(a));
}
#endif

#if 0 
// pointers q19
void main()
{
	float arr[5]={12.5, 10.0, 13.5, 90.5, 0.5};
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 +3;

	printf("%f", *ptr2);
	printf("%d", ptr2 - ptr1);// 90.5, 3
}
#endif

#if 1
// pointers q13
void main()
{
	int *p = 10;
	p++;
	printf("p = %d\n", p);// 14
}
#endif
