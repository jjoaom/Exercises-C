/*10. Escreva um programa em que o usuário irá informar um número INTEIRO e você deverá
mostrar ao usuário o fatorial deste número.
O fatorial de um número é o produto de todos os números inteiros positivos menores ou iguais a
ele. Por exemplo, o fatorial de 5 é 5! = 5 x 4 x 3 x 2 x 1 = 120. Lembrando que por definição o
fatorial de 0 é 0! = 1.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 0,res;
    
    do
    {
        printf("Digite um número inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n<0);
    if (n == 0 || n == 1)
    {
        printf("%d! = 1",n);
    }else{
        res = n;
        printf("Fatorial de %d! = %d", n, n);
        for (int i = n-1; i != 0; i--)
        {
        //i = 2
        printf(" * %d", i);
        res *= i;
        }
        printf("= %d",res);
    }
    return 0;
}
