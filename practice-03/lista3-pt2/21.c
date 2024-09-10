/*21. Escreva um programa que leia 10 números e escreva o menor e o maior valor lido
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int maior = -2000000,menor= 1000000000,n;
    for (int i = 1; i < 10; i++)
    {
        printf("Digite o %dº número: ",i);
        scanf("%d",&n);
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
    }
    printf("O maior número é %d e o menor número é %d",maior,menor);
    return 0;
}
