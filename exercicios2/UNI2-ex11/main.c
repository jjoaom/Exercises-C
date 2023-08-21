/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorna
o preço final do produto acrescido do imposto do estado em que ele será vendido.
Se o estado não for válido, mostrará uma mensagem de erro. Estado MG SP RJ MS
Imposto 7% 12% 15% 8%
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float valor, total;
  char mg, sp, rj, ms, estado;
  printf("Insira o valor do produto: \n");
  scanf("%f", &valor);
  printf("Escolha o estado de destino do produto. mg, sp, rj ou ms.\n");
  scanf(" %c", &estado);
  if(estado = 'mg'){
    total = valor + ((valor * 7) / 100);
    printf("O total é de R$ %.2f", total);
  }else if(estado = 'sp'){
    total = (valor * 12) / 100;
    printf("O total é de R$ %.2f", total);
  }else if(estado = 'rj'){
    total = (valor * 15) / 100;
    printf("O total é de R$ %.2f", total);
  }else if(estado = 'ms'){
    total = (valor * 8) / 100;
    printf("O total é de R$ %.2f", total);
  }else{
     printf("Erro. Estado incorreto. Favor escolher a opção correta.");
  }
  return 0;
}