/*
 * -------------------------
 * 度数分布（ヒストグラム）
 * -------------------------
 */
#include <stdio.h>
#define Num 20

int main(void) {
  int a[] = {35, 25, 56, 78, 43,  66, 71, 73, 80, 90,
             0,  73, 35, 65, 100, 78, 80, 85, 35, 50};
  int i, rank, histogram[11];

  for (i = 0; i <= 10; i++) histogram[i] = 0;
  for (i = 0; i < Num; i++) {
    rank = a[i] / 10;
    if (0 <= rank && rank <= 10) histogram[rank]++;
  }
  for (i = 0; i <= 10; i++)
    if (i == 10) {
      printf("%3d        :%3d\n", i * 10, histogram[i]);
    } else {
      printf("%3d - %3d  :%3d\n", i * 10, i * 10 + 9, histogram[i]);
    }
}
