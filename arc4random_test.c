/*
 * -------------------------
 * ランダムな順列（改良版）
 * -------------------------
 */
#include <stdio.h>
#include <stdlib.h>

#define N 20

int irnd(int);

int main(void) {
  int i, result;
  for (i = 1; i <= N; i++) {
    result = irnd(N);
    printf("%d ", result);
  }
  printf("\n");
}
int irnd(int n) {  // 1~nの乱数
  return (int)(arc4random_uniform(n) + 1);
}
