/*
5. Crie uma função que recebe um vetor de caracter por parâmetro que representa um endereço
de e-mail para validar se o e-mail é válido. A função deverá retornar a posição do símbolo ‘@’. Se
o símbolo não estiver presente, então a função deverá retornar –1.

Implemente um main que peça ao usuário que insira um endereço de e-mail e depois chame a
função passando esse e-mail por parâmetro. Imprima se o endereço de e-mail é válido ou não.

Descrição: a função tem por objetivo verificar se um email é valido ou não vendo se ele tem @
Entrada: char email[]
Saída: -1 ou 0 e int
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int validarEmail(char email[]){
    int arroba = -1;
    for(int i=0;i < strlen(email);i++){
        if(email[i] == '@'){
            arroba = i;
            break;
        }
    }
    return arroba;
}

int main()
{
    char email[30];
    printf("Digite um endereco de email:");
    fgets(email, sizeof(email), stdin);
    //printf("Email digitado = %s",email);
    validarEmail(email);
    int arroba = validarEmail(email);
    if (arroba != -1) {
        printf("Email valido, posicao do '@': %d\n", arroba);
    } else {
        printf("Email invalido\n");
    }
    return 0;
}