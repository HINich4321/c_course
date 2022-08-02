#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c, Perimeter, s, Area;
  printf("Enter three sides of a triangle: \n");
  scanf("%f%f%f",&a,&b,&c);

  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\nPerimeter of a triangle = %.2f\n", Perimeter);
  printf("\nSemi Perimeter of a triangle = %.2f\n", s);
  printf("\nArea of a triangle = %.2f\n", Area);

  return 0;
}
