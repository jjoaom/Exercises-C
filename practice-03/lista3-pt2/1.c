/*1. Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa.
Para isto, mandou digitar uma linha para cada mercadoria com o preço de compra e de venda de
cada uma. A última linha contém preço de compra igual a 0. Escreva um programa que determine
e escreva quantas mercadorias proporcionaram:
1. Lucro < 10%
2. 10% <= lucro <= 20%
3. Lucro > 20

exemplo: compra: 10 - venda: 15
logo 15 - 10 = 5 e 10 * 0.10 = 10%

*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mercadorias, lucro1,lucro2,lucro3;
    float compra, venda,lucro;
    printf("Digite quantas mercadorias foram comercializas: ");
    scanf("%d", &mercadorias);
    for (int i = 1; i <= mercadorias; i++)
    {
        printf("Digite o preço de compra: ");
        scanf("%f",&compra);
        printf("Digite o preço da venda: ")/
        scanf("%f",&venda);
        printf("Preço de compra: R$%.1f - Preço de venda: R$%.1f \n", compra,venda);
        lucro = venda - compra;
        if(lucro > (compra * 0.20)){
            lucro1++;
            printf("%d mercadorias tiveram mais de 20%% de lucro\n",lucro1);
        }else if(lucro >= (compra * 0.10) && lucro <= (compra * 0.20) ){
            lucro2++;
            printf("%d mercadorias tiveram mais de entre 10%% e 20%% de lucro\n",lucro2);
        }else if(lucro < (compra * 0.10)){
            lucro3++;
            printf("%d mercadorias tiveram menos de 10%% de lucro\n",lucro3);
        }
    }
    printf("Preço de compra: 0");

    return 0;
}