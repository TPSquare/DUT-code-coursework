#include <stdio.h>

int main() {
  double a1, b1, c1, a2, b2, c2, d, dx, dy;
  scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2);
  if (a1 == 0 && b1 == 0 && a2 == 0 && b2 == 0) {
    if (c1 == 0 && c2 == 0) printf("Phuong trinh co vo so nghiem");
    else printf("Phuong trinh vo nghiem");
    return 0;
  }
  d = a1 * b2 - a2 * b1;
  dx = c1 * b2 - c2 * b1;
  dy = a1 * c2 - a2 * c1;
  if (d != 0) {
    printf("Nghiem cua he phuong trinh:\n");
    printf("\tx = %.3lf\n", dx / d);
    printf("\ty = %.3lf", dy / d);
  } else if (dx == 0 && dy == 0) printf("Phuong trinh co vo so nghiem");
  else printf("Phuong trinh vo nghiem");
  return 0;
}