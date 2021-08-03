/*
 * -------------------------
 * 漸化式（nCrの計算）
 * -------------------------
 */
#include <stdio.h>

long combine(int, int);

int main(void) {
  int n, r;

  for (n = 0; n <= 5; n++) {
    for (r = 0; r <= n; r++) printf("%dC%d=%ld  ", n, r, combine(n, r));
    printf("\n");
  }
}
long combine(int n, int r) {
  int i;
  long p = 1;
  for (i = 1; i <= r; i++) p = p * (n - i + 1) / i;
  return p;
}
