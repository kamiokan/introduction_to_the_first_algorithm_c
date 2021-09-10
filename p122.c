/*
 * -------------------------
 * 直接選択法によるソート
 * -------------------------
 */
#include <stdio.h>

#define N 6

int main(void) {
  int array[] = {80, 41, 35, 90, 40, 20};
  int min, moving_number, temporary, i, j;

  for (i = 0; i < N - 1; i++) {
    min = array[i];
    moving_number = i;
    for (j = i + 1; j < N; j++) {
      if (array[j] < min) {
        min = array[j];
        moving_number = j;
      }
    }
    temporary = array[i];
    array[i] = array[moving_number];
    array[moving_number] = temporary;
  }
  for (i = 0; i < N; i++) printf("%d ", array[i]);
  printf("\n");
}
