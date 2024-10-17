/*6. Crie um procedimento que recebe um vetor de caracteres. Esse procedimento deverá contar o
número de palavras que são repetidas no texto e imprima a contagem de cada palavra repetida
juntamente com sua frequência. Implemente o mais que solicita ao usuário o texto e chame o
procedimento passando o vetor de caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void palavraRepetida(char texto[]){


}

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *texto =(char*)malloc(100 * sizeof(char));
    if(texto == NULL){
        printf("Erro ao alocar memória.");
        return 1;
    }
    int tamanho = strlen(texto);
    printf("Digite uma frase com até 100 caracteres:\n");
    fgets(texto,100,stdin);
    palavraRepetida(texto);
    return 0;
}