#include <stdio.h>
int x_power_y(int x,int y)
{
	if(y == 0)
		return 1;
	 return x*x_power_y(x,y-1);
	//(y == 0) ? return 1 : return (x * x_power_y(x , y-1));
}

int main()
{
	int value = x_power_y(5, 3);
	printf("%d",value);
	return 0;
}
