/*
 * -------------------------
 * シェルソート（改良挿入法）
 * -------------------------
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100  // データ数

int main(void) {
  int random_numbers[N], i, j, k, gap, t;

  for (i = 0; i < N; i++)  // N個の乱数
//    random_numbers[i] = rand();
    random_numbers[i] = arc4random_uniform(100000);

  gap = N / 2;  // ギャップの初期値
  while (gap > 0) {
    for (k = 0; k < gap; k++) {
      for (i = k + gap; i < N; i = i + gap) {
        for (j = i - gap; j >= k; j = j - gap) {
          if (random_numbers[j] > random_numbers[j + 1]) {
            t = random_numbers[j];
            random_numbers[j] = random_numbers[j + 1];
            random_numbers[j + 1] = t;
          } else {
            break;
          }
        }
      }
    }
    gap = gap / 2;  // ギャップを半分にする
  }

  for (i = 0; i < N; i++) printf("%14d", random_numbers[i]);
  printf("\n");
}
