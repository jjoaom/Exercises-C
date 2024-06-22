/*2. Escreva um programa que calcule a amplitude total (AT) de uma série de cinco números. A
amplitude e definida pela diferença entre o menor e o maior número.
AT = maior valor – menor valor.
*/

#include <stdio.h>

int main(){
    int at,maior,menor,x1,x2,x3,x4,x5;
    printf("Digite 5 numeros inteiros:\n");
    scanf("%d %d %d %d %d", &x1,&x2,&x3,&x4,&x5);
    maior = menor = x1;
    if(x2 > maior){
        maior = x2;
    }else if(x2 < menor){
        menor = x2;
    }
    if(x3 > maior){
        maior = x3;
    }else if(x3 < menor){
        menor = x3;
    }
    if(x4 > maior){
        maior = x4;
    }else if(x4 < menor){
        menor = x4;
    }
    if(x5 > maior){
        maior = x5;
    }else if(x5 < menor){
        menor = x5;
    }
    at = maior - menor;
    printf("O maior numero = %d\n", maior);
    printf("O menor numero = %d\n", menor);
    printf("A amplitude total = %d\n",at);
    return 0;
}