/*
 * -------------------------
 * 2~Nの中から素数を拾い出す
 * -------------------------
 */
#include <math.h>
#include <stdio.h>

#define NUM 100000

int main(void) {
  int prime[NUM / 2 + 1];
  int i, n, m = 0, Limit;

  for (n = 2; n <= NUM; n++) {
    Limit = (int)sqrt((double)n);
    for (i = Limit; i > 1; i--) {
      if (n % i == 0) break;
    }
    if (i == 1) prime[m++] = n;
  }

  printf("\n求められた素数\n");
  for (i = 0; i < m; i++) printf("%6d", prime[i]);
  printf("\n");
}
