/*1. Implemente um programa em C que leia dois inteiros, armazenando-os em variáveis. O
programa deve comparar os endereços das variáveis e exibir o maior deles.*/

#include <stdio.h>

int main() {
  int x,y,maior;
  //Declaração de ponteiros e atribuindo variáveis
  int *p = &x;
  int *q = &y;

  printf("Escreva dois inteiros:");
  scanf("%d %d",&x,&y);

  if(*p > *p){
    maior = *p;
  }else{
    maior = *q;
  }
  printf("O maior é %d", maior);

return 0;
}