/* float.c */
/* float is a numer with decimal point */

#include <stdio.h>

int main()
{
  float pi, r, answer;

  printf("What is the r in cm?\n"); // r - radius
  scanf("%f", &r); 
  
  pi = 3.14;
  
  answer =  r * r * pi;

  printf("The area of the circle is: %f^2\n", answer);
  
  return 0;
}


/* Example figure
  -------
 /       \
|         |
 \       /
  -------


*/

