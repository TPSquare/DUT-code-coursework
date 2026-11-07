#include <stdio.h>

long long ucln(long long a, long long b) {
  if (b == 0) return a;
  return ucln(b, a % b);
}

int main() {
  long long a, b;
  scanf("%lld %lld", &a, &b);
  if (a == 0 || b == 0) printf("0");
  else printf("%lld", a / ucln(a, b) * b);
  return 0;
}