/*6. Desenvolva um algoritmo que imprima os n primeiros elementos da série de
Fibonacci. Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de
Fibonacci.


O que é fibonacci? É uma série de números no qual cada termo equivale a soma dos
dois anteriores. Por exemplo: 0 + 1 = 1; 1 + 1 = 2; 2 + 1 = 3;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int f, l, a = 0, b = 1;
  printf("Digite a quantidade de números da sequência Fibonacci que deseja ver: ");
  scanf("%d", &l);
  //enquanto a soma de a + b for menor que l 
  while (a + b < l) {
    //faça f a soma de a + b
    f = a + b;
    printf("%d", f);
    //imprime o resultado atual de f e substitui os valores equivalentes a soma dos anteriores
    b = a;
    a = f;
  }

  return 0;
}