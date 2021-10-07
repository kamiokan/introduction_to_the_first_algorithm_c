/*
 * -------------------------
 * ユークリッドの互除法（再帰版2）
 * -------------------------
 */
#include <stdio.h>

int gcd(int, int);

int main(void) {
  int a, b;

  printf("２つの整数を入力してください");
  scanf("%d %d", &a, &b);

  printf("最大公約数=%d \n", gcd(a, b));
}
int gcd(int m, int n) {
  if (n == 0)
    return m;
  else
    return gcd(n, m % n);
}
