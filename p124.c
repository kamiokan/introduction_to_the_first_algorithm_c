/*
 * -------------------------
 * シェーカーソート
 * -------------------------
 */
#include <stdio.h>

#define N 9

int main(void) {
  int array[] = {3, 5, 6, 9, 2, 7, 8, 10, 4};
  int left, right, i, shift, temporary;

  left = 0;
  right = N - 1;
  while (left < right) {
    for (i = left; i < right; i++) {
      if (array[i] > array[i + 1]) {
        temporary = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temporary;
        shift = i;
      }
    }
    right = shift;
    for (i = right; i > left; i--) {
      if (array[i] < array[i - 1]) {
        temporary = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temporary;
        shift = i;
      }
    }
    left = shift;
  }
  for (i = 0; i < N; i++) printf("%d ", array[i]);
  printf("\n");
}
