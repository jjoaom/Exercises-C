/*************************************************************

5. Escreva um programa que verifique se um número é palíndromo.

Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454, 10501

Para treinar, faça em forma de função e depois faça uma função de palindromo de palavras
Faça do tipo bool
depois faça do tipo void
e do tipo respectivo

*************************************************************/

#include <stdio.h>
#include <string.h>



int main()
{
    char palindromo[30];
    printf("Digite uma palavra: \n");;
    fgets(palindromo, sizeof(palindromo),stdin);
    
    
    int inicio = palindromo[0];
    int fim = sizeof(palindromo);

    while(palindromo[inicio] == palindromo[fim]){
        inicio++;
        fim--;
        if(inicio >= fim){
            break;
        }
        if()
    }

   
    return 0;
}