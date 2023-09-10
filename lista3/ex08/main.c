/*8. Escreva um programa que apresente o menu de opções a seguir e permita ao
usuário escolher a opção desejada. Leia os dados necessários para executar a
operação e mostre o resultado. Esse processo deverá ser repetido até que o
usuário escolha a opção 4. Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int menu, meses;
  double salario, ferias, res, decimo_terceiro, total;
  // menu para escolher as opções
  do {
    printf("Menu de opções:\n 1. Novo salário\n 2. Férias\n 3. Décimo "
           "terceiro\n 4. Sair\n");
    scanf("%d", &menu);
    // informa que o valor não está nas opões
    if (menu <= 0 || menu > 4) {
      printf("Valor inválido.\n");
    }
    // repete o bloco para o user inserir opção valida
  } while (menu < 1 || menu > 4);

  /*Opção 1: ler o salário de um funcionário, calcular e mostrar o novo salário
usando as regras a seguir: Salários Percentagem de aumento Até R$999,99 15% De
R$1000,00 a R$2000,00 (inclusive) 10% Acima de R$2000,00 5%
*/
  if (menu == 1) {
    // pede o salario ao user
    printf("Insira o seu salário atual:\n");
    scanf("%lf", &salario);
    // faz o calculo do aumento com base na faixa salarial
    if (salario <= 999.99) {
      res = salario + salario * 0.15;
      printf("O seu novo salário é equivalente a: R$%.2lf", res);
    } else if (salario > 1000 && salario <= 2000) {
      res = salario + salario * 0.10;
      printf("O seu novo salário é equivalente a: R$%.2lf", res);
    } else if (salario > 2000) {
      res = salario + salario * 0.05;
      printf("O seu novo salário é equivalente a: R$%.2lf", res);
    }
    /*Opção 2: ler o salário de um funcionário, calcular e mostrar o valor de
    suas férias. Sabe-se que as férias equivalem a seu salário acrescido de um
    terço do salário.*/
  } else if (menu == 2) {
    printf("Insira o seu salário atual:");
    scanf("%lf", &salario);

    ferias = salario + (salario / 3);
    printf("O valor de suas férias é igual a R$%.2lf", ferias);
    /*Opção 3: ler o salário de um funcionário e o número de meses de trabalho
    na empresa (no máximo doze), calcular e mostrar o valor do décimo terceiro
    salário. Sabe-se que o décimo terceiro equivale a seu salário multiplicado
    pelo número de meses de trabalho dividido por 12. Caso o usuário informe o
    número de meses inválido, o programará deverá informar que o valor é
    inválido e deverá solicitar um novo valor, até que um valor válido seja
    informado. */
  } else if (menu == 3) {
    printf("Insira o seu salário atual:\n");
    scanf("%lf", &salario);
    do {
      printf("Insira a quantidade de meses trabalhados no ano:\n");
      scanf("%d", &meses);
      if (meses < 1 || meses > 12) {
        printf("Valor inválido\n");
      }

    } while (meses < 1 || meses > 12);

    decimo_terceiro = (salario * meses / 12);
    total = salario + decimo_terceiro;
    printf("O valor do seu décimo terceiro é igual a: R$%.2lf\n",
           decimo_terceiro);
    printf("Você irá receber o total de R$%.2lf", total);

    /*Opção 4: sair do programa
    Obs: caso seja informada uma opção ou um salário inválido (isto é, menor que
    zero), o programa deve ser solicitado um novo valor, até que um valor
    informado seja válido. Utilize o comando do- while para implementar esta
    parte do programa.*/
  } else if (menu == 4) {
    printf("Fim.");
  }

  return 0;
}
