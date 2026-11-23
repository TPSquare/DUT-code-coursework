#include <math.h>
#include <stdio.h>

int i = 0;
void in_nghiem(double x);
void swap(double* x, double* y);

int main() {
  double a, b, c, delta, x, y;
  scanf("%lf %lf %lf", &a, &b, &c);
  delta = b * b - 4 * a * c;
  if (delta < 0) printf("Phuong trinh vo nghiem");
  else if (delta == 0) {
    x = -b / (2 * a);
    if (x < 0) printf("Phuong trinh vo nghiem");
    else if (x == 0) printf("Phuong trinh co 1 nghiem: x = 0");
    else {
      printf("Phuong trinh co 2 nghiem:\n");
      in_nghiem(x);
    }
  } else {
    x = (-b - sqrt(delta)) / (2 * a);
    y = (-b + sqrt(delta)) / (2 * a);
    if (x < 0 || y < 0) {
      if (x < 0 && y < 0) printf("Phuong trinh vo nghiem");
      else {
        if (x < 0) swap(&x, &y);
        if (x == 0) printf("Phuong trinh co 1 nghiem: x = 0");
        else {
          printf("Phuong trinh co 2 nghiem:\n");
          in_nghiem(x);
        }
      }
    } else if (x == 0 || y == 0) {
      printf("Phuong trinh co 3 nghiem:\n");
      in_nghiem(x);
      in_nghiem(y);
    } else {
      printf("Phuong trinh co 4 nghiem:\n");
      in_nghiem(x);
      in_nghiem(y);
    }
  }
  return 0;
}

void in_nghiem(double x) {
  if (x == 0) printf("\tx%d = 0\n", ++i);
  else {
    x = sqrt(x);
    printf("\tx%d = %.3lf\n", ++i, x);
    printf("\tx%d = %.3lf\n", ++i, -x);
  }
}

void swap(double* x, double* y) {
  double tmp = *x;
  *x = *y;
  *y = tmp;
}