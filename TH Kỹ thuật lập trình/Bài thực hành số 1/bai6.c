#include <math.h>
#include <stdio.h>

int main() {
  double x, y, t, m;
  scanf("%lf %lf", &x, &y);
  if (x * x - y <= 0) printf("Loi mien xac dinh cua log");
  else {
    m = cos(x + y) - sin(x);
    if (m == 0) printf("Loi mau bang 0");
    else {
      t = exp(x + y) - log(x * x - y);
      printf("%.3lf", t / m);
    }
  }
}