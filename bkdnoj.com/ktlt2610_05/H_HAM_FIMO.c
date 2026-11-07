#include <stdio.h>

long long n, m;

long long res(long long n) {
  long long a = 1, b = 1, c, i;
  for (i = 3; i <= n; i++) {
    c = (a + b) % m;
    a = b;
    b = c;
  }
  return b;
}

int main() {
  scanf("%lld %lld", &n, &m);
  printf("%lld", res(n));
  return 0;
}