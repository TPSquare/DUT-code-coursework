#include <stdio.h>

int main() {
  int q, n, k, i;
  long long res[1004];
  scanf("%d", &q);
  for (i = 0; i < q; i++) {
    scanf("%d %d", &n, &k);
    res[i] = k / (n - 1) * n + k % (n - 1);
    if (k % (n - 1) == 0) --res[i];
  }
  for (i = 0; i < q; i++) printf("%lld\n", res[i]);
  return 0;
}