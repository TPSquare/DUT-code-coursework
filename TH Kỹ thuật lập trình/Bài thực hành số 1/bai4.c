#include <math.h>
#include <stdio.h>

int main() {
  double x, y, t, m;
  scanf("%lf %lf", &x, &y);
  t = exp(x + y) + log(fabs(x * x - y) + 5);
  m = cos(x + y) - sin(x) + 3;
  printf("%.3lf", t / m);
  return 0;
}