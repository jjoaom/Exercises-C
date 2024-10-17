/*5. Crie uma função que recebe um vetor de caracter por parâmetro que representa um endereço
de e-mail para validar se o e-mail é válido. A função deverá retornar a posição do símbolo ‘@’. Se
o símbolo não estiver presente, então a função deverá retornar –1.
Implemente um main que peça ao usuário que insira um endereço de e-mail e depois chame a
função passando esse e-mail por parâmetro. Imprima se o endereço de e-mail é válido ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int validaEmail(char email[], int *tamanho){
    for(int i=0; i < *tamanho; i++){
        if(email[i] == '@'){
            return i+1;
        }
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *email = (char*)malloc(31 * sizeof(char));
    if (email == NULL)
    {
        printf("Erro ao alocar memória.");
        return 1;
    }
    printf("Digite um endereço de email: ");
    fgets(email,31,stdin);
    int tamanho = strlen(email);
    if(email[tamanho -1] == '\n'){
        email[tamanho -1] = '\0';
        tamanho--;
    }

    printf("O @ está na posição %d", validaEmail(email,&tamanho));
    free(email);
    return 0;
}