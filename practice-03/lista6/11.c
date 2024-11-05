/*B1. Escreva um programa que leia um nome e o imprima de trás para frente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *palavra = (char*)malloc(30 * sizeof(char));
    if (!palavra)
    {
        return 1;
    }
    printf("Digite uma palavra: ");
    fgets(palavra,30,stdin);
    palavra[strcspn(palavra,"\n")] = 0;
    int tamanho = strlen(palavra);

    for (int i = tamanho -1; i >= 0; i--)
    {
        printf("%c",palavra[i]);
    }
    

    free(palavra);
    return 0;
}