/*5. Escreva um programa que verifique se um número é palíndromo.
Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454, 10501*/
#include <stdio.h>
#include <math.h>

int main(){
    int num, aux, reverso;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    aux = num;
    reverso = 0;
    while (aux != 0)
    {
        //essa conta acrescenta um digito a direita e remove fora invertendo o numero
        reverso = reverso * 10 + aux % 10;
        aux = aux / 10;
    }
    if (reverso == num)
    {
        printf("Palindromo");
    }else
    {
        printf("Nao eh Palindromo");
    }
    
    
    return 0;
}