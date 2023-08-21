/*7.Implemente um algoritmo com as linhas a seguir e apresente no código-fonte uma explicação
detalhada, com suas palavras, do que acontece em cada uma das linhas:
Linha Comando Explicação
1 int a,b,c,d=1;
2 a = -2;
3 b = a*a;
4 c = d++;
5 d = c++ + 5;
6 d = ++c + 5;
7 printf ("%d %d %d %d", a, b, c, d)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  //1 linha:declaração de variaveis, na qual somente a d tem um valor atribuido
  int a,b,c,d=1;
  
  //2 linha: atribui o valor -2 para a
  a = -2;
  
  //3 linha: atribui o valor de 4 para b, -2 * -2 = 4
  b = a*a;
  
  //4 linha: incrementa o valor de d(1) para a variavel c, ou seja 1 + 1 =2
  c = d++;
  
  //5 linha:recebe o valor de c e soma com 5, após isso realiza o incremento, resultado = 2 + 5 (+1) do pós incremento
  d = c++ + 5;
  
  //6 linha: recebe o valor de c e incrementa antes de somar com 5, ou seja, 3 + 5
  d = ++c + 5;
  
  //7 linha: exibe o resultado de todas as variaveis após os calculos
  printf ("%d %d %d %d", a, b, c, d);
  return 0;
}