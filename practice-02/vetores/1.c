/******************************************************************************

Faça um programa que leia um vetor de 100 posições de números inteiros
e, em seguida, mostre somente os números positivos

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[100];

    for(int i=0;i<100;i++){
        scanf("%d",&vetor[i]);
    }
    
    for(int i=0;i<100;i++){
        if(vetor[i]>0){
            printf("%d\t",vetor[i]);
        }
    }
    return 0;
}
