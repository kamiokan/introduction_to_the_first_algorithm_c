/*
 * -------------------------
 * ポインタをソートする
 * -------------------------
 */
#include <stdio.h>
#include <string.h>

#define N 10

int main(void) {
  struct girl {
    char name[20];
    int age;
  } * temporary, *sorted_names[N],
      name_and_ages[] = {"Ann",    18, "Rolla",    19, "Nancy", 16, "Eluza", 17,
                         "Juliet", 18, "Machilda", 20, "Emy",   15, "Candy", 16,
                         "Ema",    17, "Mari",     18};

  char *min;
  int s, i, j;

  for (i = 0; i < N; i++)  // データをポインタで指し示す
    sorted_names[i] = &name_and_ages[i];

  for (i = 0; i < N - 1; i++) {
    min = sorted_names[i]->name;
    s = i;
    for (j = i + 1; j < N; j++) {
      if (strcmp(sorted_names[j]->name, min) < 0) {
        min = sorted_names[j]->name;
        s = j;
      }
      temporary = sorted_names[i];  // ポインタの交換
      sorted_names[i] = sorted_names[s];
      sorted_names[s] = temporary;

      printf("sorted_names[%d]: %10s%4d\n", i, sorted_names[i]->name,
             sorted_names[i]->age);
    }
  }
  for (i = 0; i < N; i++)
    printf("%10s%4d\n", sorted_names[i]->name, sorted_names[i]->age);
  printf("\n");
}
