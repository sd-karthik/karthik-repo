#include <stdio.h>

int main();
void print_it();
void (*fn_ptr)();

int main()
{
  void (*fn_ptr)() = print_it;

  (*fn_ptr)();

  return 0;
}

void print_it()
{
  printf("We are here!  We are here!\n\n");
}
