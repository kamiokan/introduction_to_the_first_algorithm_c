/*
 * -------------------------
 * 2分探索法
 * -------------------------
 */
#include <stdio.h>

#define N 10  // データ数

int main(void) {
  int numbers[] = {2, 3, 7, 11, 31, 50, 55, 70, 77, 80};
  int key, low, high, mid, flag = 0;

  printf("検索する data ? ");
  scanf("%d", &key);
  low = 0;
  high = N - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (numbers[mid] == key) {
      printf("%d は %d 番目にありました\n", numbers[mid], mid);
      flag = 1;
      break;
    }
    if (numbers[mid] < key)
      low = mid + 1;
    else
      high = mid - 1;
  }

  if (flag != 1) printf("見つかりませんでした\n");
}
