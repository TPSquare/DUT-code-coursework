#include <math.h>
#include <stdio.h>

int main() {
  double x, t, m;
  scanf("%lf", &x);
  t = pow(x, 3) + log(fabs(x - 3) + 2) / log(5);
  m = pow(atan(x - 5), 2) + 1;
  printf("%.3lf", t / m);
  return 0;
}