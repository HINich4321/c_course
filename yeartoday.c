#include <stdio.h>

int main() {
  float days,years,weeks,months;
  printf("Enter years: ");
  scanf("%f", &years);
  days = years*365;
  weeks = years*72;
  months = years*12;
  printf("Years to days: %.2f\n", days);
  printf("Years to weeks: %.2f\n", weeks);
  printf("Years to months: %.2f\n", months);
}
