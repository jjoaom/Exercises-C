/*6. Escreva um programa em que o usuário irá informar um número INTEIRO e você deverá
mostrar ao usuário o fatorial deste número.
O fatorial de um número é o produto de todos os números inteiros positivos menores ou iguais
a ele. Por exemplo, o fatorial de 5 é 5! = 5 x 4 x 3 x 2 x 1 = 120. Lembrando que por definição o
fatorial de 0 é 0! = 1.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int num, fatorial = 1;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("0! = 1");
    }else{
        for (int i = 1; i <= num; i++)
        {
            fatorial *= i;

        }
            printf("%d! = %d\n", num, fatorial);

    }
    

    return 0;
}