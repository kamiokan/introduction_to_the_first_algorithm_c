/*
 * -------------------------
 * 基本挿入法
 * -------------------------
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100  // データ数

int main(void) {
  int random_numbers[N], i, j, t;

  for (i = 0; i < N; i++)  // N個の乱数
    random_numbers[i] = rand();

  for (i = 0; i < N; i++) {
    for (j = i - 1; j >= 0; j--) {
      if (random_numbers[j] > random_numbers[j + 1]) {
        t = random_numbers[j];
        random_numbers[j] = random_numbers[j + 1];
        random_numbers[j + 1] = t;
      } else {
        break;
      }
    }
  }

  for (i = 0; i < N; i++) printf("%14d", random_numbers[i]);
  printf("\n");
}
