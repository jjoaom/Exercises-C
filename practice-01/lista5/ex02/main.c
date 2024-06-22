/*2. Faça um procedimento que leia 3 números inteiro (a, b, c). Para cada valor
lido, mostre o nome da variável, o endereço e o seu valor, conforme
exemplificado a seguir: NOME_VARIAVEL ENDEREÇO VALOR a 0000fff0 5 b 0000fff4 9
c 0000fff8 1
Invoque o procedimento por meio do programa principal/main.*/

#include <stdio.h>

int func() {
  //declara variaveis
  int a, b, c;
  //declara os ponteiros e atribui as variaveis
  int *x = &a;
  int *y = &b;
  int *z = &c;

  printf("Escreva três números inteiros: ");
  scanf("%d %d %d", &a, &b, &c);

  //o comando %p serve para imprimir o endereço da memoria
  printf("a %d %p\t", a, x);
  printf("b %d %p\t", b, y);
  printf("c %d %p\t", c, z);
}

int main() {
  //retorna a função na main
  return func(); 
}