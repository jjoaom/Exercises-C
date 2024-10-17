/*1. Solicite ao usuário que insira uma string. Conte o número de vogais na string utilizando um
vetor para armazenar as vogais ('a', 'e', 'i', 'o', 'u') e percorrendo a string fornecida. Imprima
o número total de vogais encontradas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *palavra = (char *)malloc(30 * sizeof(char));
    int *vogais = (int * )malloc(5 * sizeof(int));
    int somaVogais =0;
    if (palavra == NULL || vogais == NULL)
    {
        printf("Erro ao alocar memória.");
        return 1;
    }
    printf("Digite uma palavra: \n");
    fgets(palavra,50,stdin);
    int tamanho = strlen(palavra);
    if (palavra[tamanho -1] == '\n'){
        palavra[tamanho-1] = '\0';
        tamanho--;
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (isupper(palavra[i]))
        {
            tolower(palavra[i]);
        }
        
    }
    
    
    for (int i = 0; i < tamanho; i++){
        switch (palavra[i])
        {
        case 'a':
            vogais[0]++;
            somaVogais++;
            break;
        case 'e':
            vogais[1]++;
            somaVogais++;
            break;
        case 'i':
            vogais[2]++;
            somaVogais++;
            break;
        case 'o':
            vogais[3]++;
            somaVogais++;
            break;
        case 'u':
            vogais[4]++;
            somaVogais++;
            break;
        
        default:
            break;
        }
    }
    printf("Vogais A encontradas: %d\n",vogais[0]);
    printf("Vogais E encontradas: %d\n",vogais[1]);
    printf("Vogais I encontradas: %d\n",vogais[2]);
    printf("Vogais O encontradas: %d\n",vogais[3]);
    printf("Vogais U encontradas: %d\n",vogais[4]);
    printf("Total de Vogais encontradas: %d\n",somaVogais);
    free(vogais);
    free(palavra);
    return 0;
}