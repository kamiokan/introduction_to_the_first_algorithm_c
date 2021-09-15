/*
 * -------------------------
 * シェルソート改（改良挿入法）
 * -------------------------
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100  // データ数

int main(void) {
  int random_numbers[N], i, j, gap, t;

  for (i = 0; i < N; i++)  // N個の乱数
                           //    random_numbers[i] = rand();
    random_numbers[i] = arc4random_uniform(100000);

  for (gap = 1; gap < N / 3; gap = 3 * gap + 1)
    ;  // Nより小さい範囲で最大のgapを決める
  while (gap > 0) {
    for (i = gap; i < N; i++) {
      for (j = i - gap; j >= 0; j = j - gap) {
        if (random_numbers[j] > random_numbers[j + gap]) {
          t = random_numbers[j];
          random_numbers[j] = random_numbers[j + gap];
          random_numbers[j + gap] = t;
        } else {
          break;
        }
      }
    }
    gap = gap / 3;  // ギャップを1/3にする
  }

  for (i = 0; i < N; i++) printf("%14d", random_numbers[i]);
  printf("\n");
}
