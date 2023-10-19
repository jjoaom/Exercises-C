#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, result;
  printf("Tabuada de 1 até : ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    printf("Tabuada do número %d \n", i);
    for (int j = 1; j <= 10; j++) {
      result = i * j;
      printf("%d * %d = %d \n", i, j, result);
    }
  }

  return 0;
}