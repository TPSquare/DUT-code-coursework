#include <stdio.h>

long long ucln(long long a, long long b) {
  if (b == 0) return a;
  return ucln(b, a % b);
}

int main() {
  long long n, a, b;
  scanf("%lld %lld %lld", &n, &a, &b);
  long long bcnn = a / ucln(a, b) * b;
  printf("%lld", n / a + n / b - n / bcnn);
  return 0;
}