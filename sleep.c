/* sleep.c */

#include <stdio.h>
#include <unistd.h> /* sleep function require this library */

int main()
{
  printf("Wait while processing...");
  fflush(stdout);
  sleep(2);
  printf(" ok\n");

  return 0;
}
