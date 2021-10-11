/*
 * -------------------------
 * 順列で単語の生成（辞書式順）
 * -------------------------
 */
#include <stdio.h>

#define N 4
char p[N + 1];

void perm(int);

int main(void) {
  int i;

  p[1]='a';p[2]='c';p[3]='h';p[4]='t';
  perm(1);
}
void perm(int i) {
  int j, k, t;

  if (i < N) {
    for (j = i; j <= N; j++) {
      t = p[j];  // p[i]からp[j]の右ローテイト
      for (k = j; k > i; k--) p[k] = p[k - 1];
      p[i] = t;
      perm(i + 1);  // 再帰呼び出し
      for (k = i; k < j; k++) p[k] = p[k + 1];
      p[j] = t;  // 元に戻す
    }
  } else {
    for (j = 1; j <= N; j++) printf("%c ", p[j]);
    printf("\n");
  }
}
