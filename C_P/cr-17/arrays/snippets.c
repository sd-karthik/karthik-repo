#include<stdio.h>

#if 0 
int main(void)
{
    int b = 10;
    int a[3] = {1, 2, 3}; 

    printf("b = %d \n",b);
    a[3] = 95;
    printf("b = %d \n",b); 

    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	char *p[1] = {"hello"};
	printf("%p",*p[0]);
	return 0;
}
#endif

#if 0
int main()
{
	int a = 12;
	int *p = &a;
	printf("p = %p\n", p);
	printf("*p++ = %d\n", *p++);
	//printf("++*p = %d\n", ++*p);
	printf("a = %d\n", a);
	printf("p++ = %p\n", p++);
	return 0;
}
#endif
#if 1
int main()
{
	char *str = "hello, world";
	char *str1 = "hello, world";
	if (!(strcmp(str, str1))) 
//	if(0)
		printf("equal");
	else
		printf("unequal");
}
#endif

#if 0
int main()
{
  int arr[2] = {1, 3};
	
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
  	printf("%d\n ", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d ", arr[4]);

  return 0;
}
#endif

#if 0
int main()
{
	int arr[2] = {10, 20, 30, 40, 50};
	printf("%d\n", arr[2]);
	return 0;
}
#endif

#if 0
int main()
{
	int arr[5], i;

	printf("Size of integer in this compiler is %u\n", sizeof(int));
	for (i=0; i<5; i++)
		printf("Address arr[%d] is %p\n", i, &arr[i]);

	return 0;
}
#endif

#if 0
int main(void)
{
    char arr[3];
    char(*ptr)[3]; 

    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c'; 

    ptr = &arr; 
	
	printf("ptr = %p\n", ptr);
	printf("&arr = %p\n", &arr);
	//printf("arr++ = %d\n", arr++);
	printf("ptr++ = %p\n", ptr++);
	printf("*(ptr) = %p\n", *(ptr));
	printf("*(arr + 1) = %c\n", *(arr + 1));
	printf("**ptr + 1  = %c\n", **ptr + 1);
    return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int arr[] = {10, 20}, x = 10;
	int *ptr = &x; 
	arr = &x; 
	return 0;
}
#endif

#if 0
// pointers and arrays
#include <stdio.h>
int main()
{
   	int arr[] = {10, 20, 30, 40, 50, 60};
   	int *ptr = arr;
	printf("&arr = %p\n", &arr);
	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
	printf("arr[2] = %d\n", arr[2]);
   	printf("*(arr + 2) = %d\n", *(arr + 2));
   	printf("ptr[2] = %d\n", ptr[2]);
   	printf("*(ptr + 2) = %d\n", *(ptr + 2));
   return 0;
}
#endif

#if 0
int main()
{
	//const char *s = "globaledge";
	char *s = "globaledge";
	printf("%d", sizeof(s));
//	s[0] = 'j'; 
	printf("%s\n", s);
	return 0;
}
#endif

#if 0
int main()
{
	//void arr[10];
	void *arr[10];
	return 0;
}
#endif

#if 0
int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int *p[5] = a
	printf("p = %p\n", p);
	printf("*p = %p\n", *p);
	printf("**p = %d\n", **p);

	printf("p+1 = %p\n", p+1);
	printf("*p+1 = %p\n", *p+1);
	printf("*(*p+1) = %d\n", *(*p+1));
	printf("*(*p+4) = %d\n", *(*p+4));

	return 0;
}
#endif
