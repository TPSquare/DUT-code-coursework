#include <stdio.h>

int main() {
  unsigned long long n, k, res = 1, i;
  scanf("%llu %llu", &k, &n);
  if (k > n - k) k = n - k;
  for (i = 1; i <= k; i++) res = res * (n - k + i) / i;
  printf("%llu", res);
  return 0;
}