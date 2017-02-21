# include  <stdio.h>


int fun()
{
		return 7;
}
int main()
{

		 int fun();
		int a = fun();
		int fun(){
				return 6;
		}
		printf("%d\n",a);
		return 0;
}
