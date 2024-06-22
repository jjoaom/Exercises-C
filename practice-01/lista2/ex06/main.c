/*6. Escreva um programa que receba três valores do usuário: A, B e C. Seu
programa deve verificar se C é divisível por A e/ou B. Caso C seja divisível por
A e B, imprima na tela “Divisível por ambos”. Caso C seja divisível por A ou por
B, mas não por ambos, imprima na tela “Divisível por um”. Caso C não seja
divisível nem por A nem por B, imprima na tela “Não é divisível”. Caso o usuário
digite um valor negativo ou zero para A e/ou B, imprima na tela “Valor inválido”
e finalize a execução do programa.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c;
//recebe os valores de a, b e c
  printf("Insira os valores de A, B e C:\n");
  scanf("%d %d %d", &a, &b, &c);
//se receber um valor negativo vai retornar valor inválido
  if (a <= 0 || b <= 0) {
    printf("Valor inválido");
//se for divisivel por ambos
  } else if (a % c == 0 && b % c == 0) {
    printf("Divisivel por ambos");
//se for divisivel por somente um
  } else if (a % c == 0 || b % c == 0) {
    printf("Divisivel por um");
//se não for divisivel por nenhum
  } else{
    printf("Não é divisivel");
  }
  return 0;
}