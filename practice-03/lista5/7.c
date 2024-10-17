/*7. Implemente a função abaixo, que receba como parâmetro uma string e converte,
individualmente, cada caractere para maiúsculo. A função deverá retornar a string convertida
para maiúsculo. A string a ser retornada deverá ser criada utilizando o comando malloc.
char* capitalizeString(char *vetor, int tamanho);
Ilustre o funcionamento da função criando um main que solicita ao usuário o texto e chama a
função. O main deverá imprimir o resultado da função.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Digite uma palavra: ");
    return 0;
}