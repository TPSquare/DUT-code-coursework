#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  n *= n;
  printf("%d", n / 2 + n / 3 - n / 6);
  return 0;
}