/*3.Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
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
  char m, s, r, e, x;
  //armazena o valor do produto
  printf("Insira o valor do produto: \n");
  scanf("%f", &valor);

  //escolhe o destino
  printf("Escolha o estado de destino do produto. MG: m, SP: s, RJ: r ou ES: e.\n");
  scanf(" %c", &x);
  //calcula o preço final com imposto referente a cada estado
  if(estado = 'm'){
    total = valor + ((valor * 7) / 100);
    printf("O total é de R$ %.2f", total);
  }else if(estado = 's'){
    total = (valor * 12) / 100;
    printf("O total é de R$ %.2f", total);
  }else if(estado = 'r'){
    total = (valor * 15) / 100;
    printf("O total é de R$ %.2f", total);
  }else if(estado = 'e'){
    total = (valor * 8) / 100;
    printf("O total é de R$ %.2f", total);
  }else{
     printf("Erro. Estado incorreto. Favor escolher a opção correta.");
  }
  return 0;
}
