/*A2. Questão 38 (string conta caracteres) - médio
Crie um método iterativo que receba como parâmetro uma string e retorne o número de
caracteres maiúsculos presentes nela. A entrada padrão é composta por várias linhas sendo que
a última apresenta apenas a palavra FIM. A saída padrão contém um número inteiro para cada
linha de entrada.
Pontifícia Universidade Católica de Minas Gerais
Instituto de Ciências Exatas e Informática (ICEI)
Engenharia de Computação / Engenharia de Software
Disciplina: Algoritmos e Estruturas de Dados I

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerFrase(char palavra[100]){
    fgets(palavra, 100, stdin);
}

void contaFrase(char palavra[100]){
    int maiusculo = 0;
    int length = strlen(palavra);
    for(int i = 0; i < length; i++){
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            maiusculo++;
        }
    }
    printf("%d", maiusculo);
}

int main(){
    char palavra[100];
    do{
        lerFrase(palavra);
        contaFrase(palavra);
    }
    while(strcmp(palavra, "FIM") != 0);
    
    return 0;
}