/*1. Escreva um procedimento que receba 3 notas de um aluno por parâmetro e uma
letra. Se a letra for "A", o procedimento calcula e escreve a média aritmética
das notas do aluno, se for "P", calcula e escreve a sua média ponderada (pesos:
5, 3 e 2). Escreva também um programa main que leia 3 notas de n alunos e acione
o procedimento para cada aluno.

a) O objetivo do procedimento/função
b) O nome do procedimento/função
c) Os parâmetros de entrada
d) O tipo de dado da saída, caso seja uma função

Descrição: a função tem por objetivo pegar as 3 notas dos alunos e calcular a media aritmetica ou ponderada.
Entrada: n1,n2,n3(float) e letra(char)
Saída: float

*/

#include <stdio.h>
// A função aluno vai fazer o calculo das notas de media aritmetica ou ponderada
float aluno() {
  float n1, n2, n3, res;
  char letra;
  // loop para pedir as notas e a letra do calculo a ser feito
  do {
    printf("\nInsira 3 notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Insira A para calcular a média aritmética ou P para média "
           "Ponderada");
    //espaço inserido antes do %c para evitar erro com /n
    scanf(" %c", &letra);
    if (letra == 'A' || letra == 'a') {
      res = n1 + n2 + n3 / 3;
      printf("\nA média aritmetica é igual a %.1f \n", res);
    } else if (letra == 'P' || letra == 'p') {
      res = (n1 * 5) + (n2 * 3) + (n3 * 2) / 3;
      printf("\nA média ponderada é igual a %.1f \n", res);
    }else{
      printf("Valor inválido");
    }
    //repete enquanto não é inserido o valor correto
  } while (letra != 'p' && letra != 'P' && letra != 'a' && letra != 'A');

  return res;
}
// a função main vai ler quantos alunos o professor precisa calcular as notas e
// em seguida repetir a função aluno conforme a quantidade de alunos
int main() {
  int numAlunos;
  printf("Insira quantos alunos você tem: \n");
  scanf("%d", &numAlunos);
  for (int i = 0; i < numAlunos; i++) {
    aluno();
  }
  return 0;
}