#include <math.h>
#include <stdio.h>

int main() {
  double x, lt, res = 0;
  long long n = 2, gt = 1, dau = 1;
  scanf("%lf", &x);
  lt = x;
  while (fabs(lt / gt) >= 1e-6) {
    res += dau * lt / gt;
    lt *= x * x;
    gt *= n * (n + 1);
    n += 2;
    dau *= -1;
  }
  printf("%.3lf", res);
  return 0;
}