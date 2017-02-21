
#include <stdio.h>

int func(int i)
{
  if(i%2) return (i++);
  else return func(func(i-1));

}

int main()
{
	func(2);
	return 0;
}
