/*3. Implemente um programa que leia dois números reais e armazene-os em duas
variáveis (ex.: A e B). Em seguida, troque dos valores das variáveis de forma
que a primeira variável passe a ter o valor da segunda, e vice-versa. Ao final,
imprima os valores finais das variáveis.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  float a, b, temp;
  printf("Digite dois números reais:");
  scanf("%f %f", &a, &b);
  // armazena o valor da variavel a na variavel temp
  temp = a;
  // passa o valor da variavel a para a variavel b
  a = b;
  // passa o valor da variavel temp para a variavel b
  b = temp;
  printf("Com os valores invertidos o A agora tem o valor de B: %f e B tem o "
         "valor de A: %f",
         a, b);
}