/*
 * -------------------------
 * スタック
 * -------------------------
 */
#include <stdio.h>

#define MaxSize 100
int stack[MaxSize];
int stackPointer = 0;  // スタック・ポインタ
int push(int);
int pop(int *);

int main(void) {
  int c, n;

  while (printf("]"), (c = getchar()) != EOF) {
    rewind(stdin);
    if (c == 'i' || c == 'I') {
      printf("data--> ");
      scanf("%d", &n);
      rewind(stdin);
      if (push(n) == -1) {
        printf("スタックが一杯です\n");
      }
    }
    if (c == 'o' || c == 'O') {
      if (pop(&n) == -1)
        printf("スタックは空です\n");
      else
        printf("stack data --> %d\n", n);
    }
  }
}
int push(int n) {
  if (stackPointer < MaxSize) {
    stack[stackPointer] = n;
    stackPointer++;
    return 0;
  } else {
    return -1;
  }
}
int pop(int *n) {
  if (stackPointer > 0) {
    stackPointer--;
    *n = stack[stackPointer];
    return 0;
  } else {
    return -1;
  }
}