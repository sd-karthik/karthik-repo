#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{
        int number;
        char name[50];
        float salary;
        long allowances;
}e;

int main()
{
	int a[5] = {0,1,2,3,4};

	e.number = 48693;
	strcpy(e.name,"emp_name");
	e.salary = 10000;
	e.allowances = 2000;

	printf("Emp_ID:%d\n",e.number);
	printf("Emp_name:%s\n",e.name);
	printf("Emp_salary:%f\n",e.salary);
	printf("Emp_allowance:%ld",e.allowances);

	return 0;
}


