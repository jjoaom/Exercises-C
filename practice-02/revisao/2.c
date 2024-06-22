/*
Escreva uma função em C chamada
troca que recebe dois ponteiros para
inteiros e troca os valores apontados
por eles.


*/

#include <stdio.h>

void troca(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}

int main(){
    int x,y;
    printf("Digite 2 valores:\n");
    scanf("%d %d", &x,&y);
    troca(&x,&y);
    printf("trocados: %d %d",*x,*y);

    return 0;
}