/*
 * -------------------------
 * 逐次探索法
 * -------------------------
 */
#include <stdio.h>
#include <string.h>

#define N 10  // データ数

int main(void) {
  struct girl {
    char name[20];
    int age;
  } name_and_ages[] = {"Ann",    18, "Rolla",    19, "Nancy", 16, "Eluza", 17,
                       "Juliet", 18, "Machilda", 20, "Emy",   15, "Candy", 16,
                       "Ema",    17, "Mari",     18};

  char key[20];
  int i;

  printf("検索する data ? ");
  scanf("%s", key);

  i = 0;
  while (i < N && strcmp(key, name_and_ages[i].name) != 0) i++;

  if (i < N)
    printf("%s %d\n", name_and_ages[i].name, name_and_ages[i].age);
  else
    printf("見つかりませんでした\n");
}
