/*
 * -------------------------
 * バブルソート
 * -------------------------
 */
#include <stdio.h>

#define N 6

int main(void) {
  int array[] = {80, 41, 35, 90, 40, 20};
  int temporary, i, j;

  for (i = 0; i < N - 1; i++) {
    for (j = N - 1; j > i; j--) {
      if (array[j] < array[j - 1]) {
        temporary = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temporary;
      }
    }
  }
  for (i = 0; i < N; i++) printf("%d ", array[i]);
  printf("\n");
}
