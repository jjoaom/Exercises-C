/*Desenhe um algoritmo que calcule a amplitude total (AT) de uma série de cinco
números, considerando que AT = maior valor – menor valor.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x1, x2, x3, x4, x5, at, maior, menor;
  printf("Insira 5 números\n");
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
  //inicia o codigo como o maior e menor numero
  maior = menor = x1;
  //atualiza com base nas estruturas if
  if(x2 > maior){
    maior = x2;
  }else if(x2 < menor){
    menor = x2;
  }
   if(x3 > maior){
    maior = x3;
  }else if(x3 < menor){
    menor = x3;
  }
   if(x4 > maior){
    maior = x4;
  }else if(x4 < menor){
    menor = x4;
  }
   if(x5 > maior){
    maior = x5;
  }else if(x5 < menor){
    menor = x5;
  }
  at = maior - menor;
  printf("A amplitude total = %d", at);
  return 0;
}