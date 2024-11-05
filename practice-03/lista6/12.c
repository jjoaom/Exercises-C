/*B2. Crie um programa que receba uma string representando a placa de um veículo e mostre o
número de letras e dígitos numéricos que ela contém. Ignore espaços e caracteres especiais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

void verificaPlaca(char *placa){
    int tamanho = strlen(placa);
    int letra = 0, nums = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (isalpha(placa[i]))
        {
            letra++;
        }
        if (isdigit(placa[i]))
        {
            nums++;
        }
        
    }
    printf("Quantidade de letras: %d\nQuantidade de números: %d",letra,nums);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *placa = (char*)malloc(8 * sizeof(char));
    if (!placa)
    {
        return 1;
    }
    printf("Digite a placa do veículo: ");
    fgets(placa,8,stdin);
    placa[strcspn(placa,"\n")] = 0;

    verificaPlaca(placa);

    free(placa);
    return 0;
}