/*
 * -------------------------
 * テキストファイルa,bの間で暗号化<==>解読が行える
 * Usage: A>p22.out < a.txt > b.txt
 * -------------------------
 */
#include <stdio.h>

int main(void) {
  int c, key = 0x07;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      putchar(c);
    else
      putchar(c ^ key);
  }
}
