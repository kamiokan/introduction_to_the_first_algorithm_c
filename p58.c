/*
 * -------------------------
 * 台形則による定積分
 * -------------------------
 */
#include <math.h>
#include <stdio.h>

#define f(x) (sqrt(4 - (x) * (x)))  // 被積分関数

int main(void) {
  int k;
  double a, b, n, h, x, s, sum;

  printf("微分区間 A,B ? ");
  scanf("%lf %lf", &a, &b);

  n = 50;           // a~b間の分割数
  h = (b - a) / n;  // 区間幅
  x = a;
  s = 0;
  for (k = 1; k <= n - 1; k++) {
    x = x + h;
    s = s + f(x);
  }
  sum = h * ((f(a) + f(b)) / 2 + s);
  printf("   /%f\n", b);
  printf("   |  sqrt(4-x*x) =%f\n", sum);
  printf("   /%f\n", a);
}