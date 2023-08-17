/* Escreva um programa que informe a categoria de um jogador de futebol, considerando
sua idade: infantil (até 13 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int idade;
  printf("Insira a idade do jogador: ");
  scanf("%d", &idade);
  if(idade <= 13){
    printf("O jogador é de categoria infantil, até 13 anos");
  } if(idade > 13 && idade <= 17){
    printf("O jogador é de categoria juvenil, até 17 anos");
  } if (idade > 17){
    printf("O jogador é de categoria sênior, acima de 17 anos.");
  }
  return 0;
}