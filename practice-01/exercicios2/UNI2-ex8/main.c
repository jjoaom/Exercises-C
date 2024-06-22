/*Faça um programa que leia o salário de um trabalhador e o valor da prestação
de um empréstimo. Se a prestação for maior que 20% do salário, imprima:
“Empréstimo não concedido”; Caso contrário, imprima: “Empréstimo concedido.”*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int salario, emprestimo, prestacao;
  printf("Informe o seu salário: \n");
  scanf("%d", &salario);
  printf("Informe o valor da prestação do emprestimo: ");
  scanf("%d", &prestacao);
  emprestimo = (salario * 20) / 100;
  if (prestacao > emprestimo) {
    printf("Empréstimo não concedido.");
  } else {
    printf("Empréstimo concedido.");
  }
  return 0;
}