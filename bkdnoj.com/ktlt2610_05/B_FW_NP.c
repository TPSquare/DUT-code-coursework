#include <stdio.h>

void np(int n) {
  if (n >= 2) np(n / 2);
  printf("%d", n % 2);
}

int main() {
  int n;
  scanf("%d", &n);
  np(n);
  return 0;
}