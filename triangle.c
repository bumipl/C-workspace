/* triangle.c - functions */
/* Wzór na pole trójkąta */

#include <stdio.h>

int area_triangle(int base, int height)
{
  int area;

  area = ( base * height ) / 2;

  return area;
}

int main()
{
  int b, h, a;
  printf("Base: ");
  fflush(stdout);
  scanf("%d", &b);

  printf("Height: ");
  fflush(stdout);
  scanf("%d", &h);

  a = area_triangle(b, h);
  printf("The area is %d\n", a);

  return 0;
}
