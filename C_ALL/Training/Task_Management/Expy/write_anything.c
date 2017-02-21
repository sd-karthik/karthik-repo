#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>

int main(void) {
/* ls -al | grep '^d' */
  FILE *pp;
	int pid = getpid();
  pp = popen("cat /proc/pid/maps", "r");
  if (pp != NULL) {
    while (1) {
      char *line;
      char buf[1000];
      line = fgets(buf, sizeof buf, pp);
      if (line == NULL) break;
      if (line[0] == 'd') printf("%s", line); /* line includes '\n' */
    }
    pclose(pp);
  }
  return 0;
}
