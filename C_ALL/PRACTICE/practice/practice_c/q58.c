#include <stdio.h>

struct Point {
  int x;
  int y;
};

int main()
{
  struct Point p1 = {10, 20};
  struct Point p2 = p1; // works: contents of p1 are copied to p1
  if (p1 == p2)  // compiler error: cannot do equality check for         
                  // whole structures
  {
    printf("p1 and p2 are same ");
  }
  getchar();
  return 0;
}
