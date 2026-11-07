#include <stdio.h>

long long fib(long long n) {
  if (n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  long long n;
  scanf("%lld", &n);
  printf("%lld", fib(n));
  return 0;
}