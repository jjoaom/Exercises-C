/*3. Implemente um programa em C que declare variáveis para armazenar um valor
inteiro, um valor real e um caractere. Deve existir no programa ponteiros
associados a cada um deles. O programa deve solicitar novos dados para as
variáveis e elas devem ser modificadas usando os respectivos ponteiros. Exiba os
endereços e os conteúdos de todas as variáveis e ponteiros, antes e após a
alteração*/

#include <string.h>

int main() {
  int a;
  float b;
  char c;
//pede um inteiro, um float e um chat
  printf("Escreva um número inteiro: ");
  scanf("%d", &a);

  printf("Escreva um número real: ");
  scanf("%f", &b);

  printf("Escreva uma letra: ");
  scanf("\n%c", &c);
//declara os ponteiros e atribui as variaveis
  int *pa = &a;
  float *pb = &b;
  char *pc = &c;
//printa os valores digitados pelo usuario e o endereço da memoria apontada
  printf("a: %d \n", a);
  printf("ponteiro de a: %p \n", pa);

  printf("b: %f\n ", b);
  printf("ponteiro de b: %p \n", pb);

  printf("c: %c\n ", c);
  printf("ponteiro de c: %p \n", pc);
//pede novamente os valores
  printf("Escreva um número inteiro: ");
  scanf("%d", &a);

  printf("Escreva um número real: ");
  scanf("%f", &b);

  printf("Escreva uma letra: ");
  scanf("\n%c", &c);
//printa mais uma vez exibindo os novos valores porem os mesmos endereços de memoria apontados
  printf("a: %d \n", a);
  printf("ponteiro de a: %p \n", pa);

  printf("b: %f\n ", b);
  printf("ponteiro de b: %p \n", pb);

  printf("c: %c\n ", c);
  printf("ponteiro de c: %p \n", pc);

  return 0;
}