/*Escreva um programa que leia as notas inteiras de 5 disciplinas que o aluno está matriculado (n1, n2, n3, n4 e n5). Depois o seu programa deverá mostrar a soma das notas (inteiro) e a média arredondada para cima (inteiro).

Entrada: 5 inteiros

Saída: uma soma (inteira) e uma média arredondada (inteira).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n1,n2,n3,n4,n5;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    int media = (n1 + n2 + n3 + n4 + n5);
    printf("%d\n",media);
    media = media/5;
    int arredondado = ceil(media);
    printf("%d",arredondado);
    return 0;
}