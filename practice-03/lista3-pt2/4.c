/*
4. Escreva um programa, usando o comando for, que leia um número inteiro n. Em seguida, faça
leitura de n números em ponto flutuante. Indique o maior valor, o menor valor e a média dos
números lidos
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n=0;
    float num,maior = -10000.0,menor = 10000.0,media = 0.0;
    while (n<=0)
    {
        printf("Digite a quantidade de números a serem lidos: ");
        scanf("%d",&n);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Digite um número: ");
        scanf("%f",&num);
        media += num;
        if (num > maior)
        {
            maior = num;
        }
        if(num < menor){
            menor = num;
        }

    }
    printf("O maior número é %.1f\n", maior);
    printf("O menor número é %.1f\n", menor);
    printf("A média dos números lidos é %.1f\n",media/n);
    
    return 0;
}