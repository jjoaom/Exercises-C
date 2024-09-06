/*2. Escreva um programa que recebe um ano do usuário e imprime na tela todos os anos bissextos
do ano 1 até o ano digitado. Utilize a estrutura de repetição while.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ano = 0;
    do
    {
        printf("Digite um ano: \n");
        scanf("%d", &ano);
    } while (ano <= 0);
    
    
    for (int i = 1; i <= ano; i++)
    {
        if(i % 400 == 0){
            printf("%d\n", i);
        }
    }
    
}