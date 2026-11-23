#include <stdio.h>

int main() {
  double l, w;
  scanf("%lf %lf", &l, &w);
  printf("D = %.3lf\n", l * w);
  printf("C = %.3lf", 2 * (l + w));
  return 0;
}