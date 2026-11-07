#include <stdio.h>

long long n, m, k;

long long luy_thua_modulo(long long m, long long n) {
  if (n == 0) return 1;
  long long t = luy_thua_modulo(m, n / 2) % k;
  t = (t * t) % k;
  if (n % 2 == 0) return t;
  else return (t * m) % k;
}

int main() {
  scanf("%lld %lld %lld", &m, &n, &k);
  if (k == 1) printf("0");
  else {
    m %= k;
    printf("%lld", luy_thua_modulo(m, n));
  }
  return 0;
}