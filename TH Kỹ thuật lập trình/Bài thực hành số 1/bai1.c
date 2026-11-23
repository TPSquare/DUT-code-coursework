#include <math.h>
#include <stdio.h>

int main() {
  double r;
  scanf("%lf", &r);
  printf("V = %.3lf\n", 4 * M_PI * pow(r, 3) / 3);
  printf("S = %.3lf", 4 * M_PI * r * r);
  return 0;
}