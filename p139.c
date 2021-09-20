/*
 * -------------------------
 * 基本挿入法（番兵を立てる）
 * -------------------------
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100  // データ数

int main(void) {
  int random_numbers[N + 1], i, j, t;

  for (i = 1; i <= N; i++)  // N個の乱数
    random_numbers[i] = arc4random_uniform(100000);

  random_numbers[0] = -9999;  // 番兵
  for (i = 2; i <= N; i++) {
    t = random_numbers[i];
    for (j = i - 1; random_numbers[j] > t; j--) {
      random_numbers[j + 1] = random_numbers[j];
    }
    random_numbers[j + 1] = t;
  }

  for (i = 1; i <= N; i++) printf("%14d", random_numbers[i]);
  printf("\n");
}
