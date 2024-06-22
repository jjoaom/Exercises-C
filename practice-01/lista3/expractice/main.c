#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multiplicacao(int n1, int n2){
  int resultado = n1 * n2;
  return (resultado);
}

int soma(int n1, int n2){
  int resultado = n1 + n2;
  return (resultado);
}

int sub(int n1, int n2){
  int resultado = n1 - n2;
  return (resultado);
}
int divisao(int n1, int n2){
  int resultado = n1 / n2;
  return (resultado);
}

void calculadora(int n1, int n2){
  int operacao;
  printf("Escolha o calculo a ser realizado: 1:SOMA 2:SUBTRAÇÃO 3:MULTIPLICAÇÃO 4:DIVISÃO\n");
  scanf("%d", &operacao);
  
  switch(operacao){
    case 1:
      printf("A soma dos numeros é: %d\n", soma(n1, n2));
    break;
    case 2:
    printf("A subtração dos numeros é: %d\n", sub(n1,n2));
    break;
    case 3:
    printf("A multiplicação dos numeros é: %d\n", multiplicacao(n1,n2));
    break;
    case 4:
    printf("A divisão dos numeros é: %d\n", divisao(n1,n2));
    break;
    default:
    break;
  }
  
}

void num(int *n1, int *n2){
  printf("Digite dois números inteiros: ");
  scanf("%d %d", n1, n2);
}

int main(){
  int v1,v2;
  num(&v1,&v2);
  calculadora(v1,v2);
  
  return 0;
}

















void randnum(){
//comando para gerar numeros aleatorios diferentes
srand(time(0));

printf("\nVinte numeros aleatorios entre 0 e 99: ");
for(int i = 0; i < 20 ; i++){
  printf(" %i",rand() % 100);
}

}