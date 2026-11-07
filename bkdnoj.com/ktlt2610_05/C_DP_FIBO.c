#include <stdio.h>

long long res(int n) {
  long long a = 1, b = 1, c;
  for (int i = 2; i <= n; i++) {
    c = (a + b) % 1000000007;
    a = b;
    b = c;
  }
  return b;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%lld", res(n));
  return 0;
}