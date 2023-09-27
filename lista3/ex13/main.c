/*13. Escreva um programa que simule uma conta bancária
    .Inicialmente o saldo deve ser 0(zero)
    .Seu programa deve apresentar um menu com as opções de depósito,
    saque, transferência e saldo.Além disso,
    o programa não deve permitir operações inválidas.*/

#include <stdio.h>

int main() {
  float saldo = 0, dep, saq, trf;
  int op;

  do {
    printf("Bem vindo ao banco X. Seu saldo é: R$%.2f\n", saldo);
    printf("Escolha:\n 1.Deposito\n 2.Saque\n 3.Transferencia\n 4.Saldo\n");
    scanf("%d", &op);
    if (op < 0 || op > 4) {
      printf("Operação inválida\n");
    }

    // menu
    switch (op) {
    case 1:
      printf("Informe o valor a ser depositado:\n");
      scanf("%f", &dep);
      saldo += dep;
      break;
    case 2:
      printf("Informe o valor a ser sacado:\n");
      scanf("%f", &saq);
      if (saq > saldo) {
        printf("Operação invalida.\n");
      } else {
        saldo -= saq;
      }
      break;
    case 3:
      printf("Informe o valor a ser trasnferido:\n");
      scanf("%f", &trf);
      if (trf > saldo) {
        printf("Operação invalida.\n");
      } else {
        saldo -= trf;
      }
      break;
    case 4:
      printf("Seu saldo é de %.2f\n", saldo);
      break;
    default:
      break;
    }
  } while (op <= 1 || op >= 4);
}