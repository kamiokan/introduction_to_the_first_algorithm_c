/*
 * -------------------------
 * キュー（待ち行列の内容を表示）
 * -------------------------
 */
#include <stdio.h>

int queueIn(int);
int queueOut(int *);
void display(void);

#define MaxSize 100  // キュー・サイズ
int queue[MaxSize];  // キュー
int head = 0, tail = 0;

int main(void) {
  int c, n;

  while (printf("]"), (c = getchar()) != EOF) {
    rewind(stdin);
    if (c == 'i' || c == 'I') {
      printf("data--> ");
      scanf("%d", &n);
      rewind(stdin);
      if (queueIn(n) == -1) {
        printf("待ち行列が一杯です\n");
      }
    }
    if (c == 'o' || c == 'O') {
      if (queueOut(&n) == -1)
        printf("待ち行列は空です\n");
      else
        printf("queue data --> %d\n", n);
    }
    if (c == 'l' || c == 'L') {
      display();
    }
  }
}
int queueIn(int n) {
  if ((tail + 1) % MaxSize != head) {
    queue[tail] = n;
    tail++;
    tail = tail % MaxSize;
    return 0;
  } else {
    return -1;  // キューが一杯のとき
  }
}
int queueOut(int *n) {
  if (tail != head) {
    *n = queue[head];
    head++;
    head = head % MaxSize;
    return 0;
  } else {
    return -1;  // キューが空のとき
  }
}
void display(void) {
  int i;

  i = head;
  while (i != tail) {
    printf("%d\n", queue[i]);
    i++;
    i = i % MaxSize;
  }
}
