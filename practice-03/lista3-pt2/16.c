/*16. Escreva um programa que receba um valor inteiro N entre 0 e 255 e imprima na tela os N
primeiros caracteres da tabela ASCII.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    do
    {
        printf("Digite um número inteiro entre 0 e 255 equivalente a um caractere da tablea ASCII: ");
        scanf("%d",&n);
    } while (n < 0 || n > 255);
    printf("Os %d primeiros caracteres da tabela ASCII são:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d: %c\n",i,i);
    }
    
    return 0;
}
