/* numbers.c */
#include <stdio.h>

int main()
{
  int x, y, answer;

  printf("Select a number\n");
  scanf("%d", &x); /* d is an integer that is a number woith out any decimal points */
  printf("Select another number\n");
  scanf("%d", &y); /* d is an integer that is a number woith out any decimal points */
  
  answer = x + y;
  
  printf("The answer is %d\n", answer);

  return 0;

}
