/*
 * -------------------------
 * クイックソート（数列の中央を軸にする）
 * -------------------------
 */
#include <stdio.h>

void quick(int *, int, int);

#define N 10

int main(void) {
  static int a[] = {41, 24, 76, 11, 45, 64, 21, 69, 19, 36};
  int k;

  quick(a, 0, N - 1);

  for (k = 0; k < N; k++) printf("%4d", a[k]);
  printf("\n");
}
void quick(int a[], int left, int right) {
  int s, t, i, j, m;

  if (left < right) {
    m = (left + right) / 2;
    t = a[m];
    a[m] = a[left];
    a[left] = t;
    s = a[left];
    i = left;
    j = right + 1;
    while (1) {
      while (a[++i] < s)
        ;
      while (a[--j] > s)
        ;
      if (i >= j) break;
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
    a[left] = a[j];
    a[j] = s;  // 軸を正しい位置に入れる

    quick(a, left, j - 1);   // 左部分列に対する再帰呼び出し
    quick(a, j + 1, right);  // 右部分列に対する再帰呼び出し
  }
}
