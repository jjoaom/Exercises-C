/*8. Escreva um programa que verifique se um número é palíndromo.
Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454 ou 10501*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 0,aux,reverso;
    while (num <= 0)
    {
        printf("Digite um número maior que zero: ");
        scan("%d", &num);
    }
    
    
}