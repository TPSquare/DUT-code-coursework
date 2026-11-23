#include <stdio.h>

int main() {
  double a, b, h;
  scanf("%lf %lf %lf", &a, &b, &h);
  printf("%.3lf", (a + b) * h / 2);
  return 0;
}