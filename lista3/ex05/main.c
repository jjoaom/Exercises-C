/*5. Escreva um programa que seja capaz de ler do teclado 31 valores reais
correspondentes ao índice pluviométrico diário da região da Pampulha durante o
mês de janeiro. O programa deve determinar e imprimir o índice pluviométrico
médio, o índice pluviométrico máximo e o dia que ele ocorreu.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  //variaveis para media, indice maximo e o dia maximo
  float media = 0, max = 0;
  int dia_max;
  //laço for que vai ler o dado dos 30 dias
  for (int i = 0; i <= 31; i++)
  {
    float pluvio;
    printf("Insira o indice pluviometrico do dia %d/01: ", i);
    scanf("%f", &pluvio);
  //somando todos os indices
    media += pluvio;
    //verifica qual o maior valor dentre todos os dias
    if (pluvio > max){
      max = pluvio;
      dia_max = i;
    }
  }
  //calculo da media
  media = media / 31;

  printf("Taxa Média do Indice pluviométrico é: %f/n", media);
  printf("No dia %d teve a máxima do Indice pluviométrico de: %f/n", dia_max, max);
  

  return 0;
}