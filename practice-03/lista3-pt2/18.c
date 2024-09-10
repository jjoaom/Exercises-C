/*18. Escreva um programa que receba valores numéricos do usuário e calcule a média dos valores
pares recebidos. Seu programa deve parar a leitura somente quando o usuário informar o valor
0 (zero)
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,media,i=0;
    do{
        printf("Digite um número positivo: ");
        scanf("%d",&n);
        if (n % 2 == 0)
        {
            media += n;
            i++;
        }
        
    } while (n != 0);
    printf("A média dos valores pares é %d",media / i);
    return 0;
}
