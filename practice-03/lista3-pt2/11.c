/*11. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de
E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 0;
    float res=0.0,e=1.0;
    
    do
    {
        printf("Digite um número inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n<0);

    for (int i = 1; i <= n; i++)
    {
        res = 1.0;
        for (int j = 1; j < i; i++)
        {
            res *= j; 
        }
        
        e += 1.0 /res;
    }
    
    printf("E = %f",e);
    return 0;
}
