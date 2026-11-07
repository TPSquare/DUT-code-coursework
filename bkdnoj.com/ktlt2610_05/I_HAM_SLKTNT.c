#include <stdio.h>

int dem(long long n, int x) {
  int res = 0;
  while (n) {
    if (n % 10 == x) ++res;
    n /= 10;
  }
  return res;
}

int main() {
  long long n;
  scanf("%lld", &n);
  printf("%d\n", dem(n, 2));
  printf("%d\n", dem(n, 3));
  printf("%d\n", dem(n, 5));
  printf("%d\n", dem(n, 7));
  return 0;
}

// Cách không dùng hàm
void res() {
  long long n;
  int d[10] = {0};
  scanf("%lld", &n);
  while (n) {
    d[n % 10]++;
    n /= 10;
  }
  printf("%d\n%d\n%d\n%d", d[2], d[3], d[5], d[7]);
}