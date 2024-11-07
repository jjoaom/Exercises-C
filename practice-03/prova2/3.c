#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getSensor(float vetor[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("Valor do %d sensor\n", i+1);
        scanf("%f",&vetor[i]);
    }
}
float media(float vetor[],int n){
    float mediaT= 0.0;
    for (int i = 0; i < n; i++)
    {
        mediaT = mediaT + vetor[i];
    }
    return mediaT = mediaT/(float) n;
}

int main(){
    int n=0;
    do
    {
        printf("Digite o n de sensores: ");
        scanf("%d",&n);
    } while (n<=0);
    float *sensores = (float*)malloc(n * sizeof(float));
    if(!sensores){
        return 1;
    }
    getSensor(sensores,n);
    printf("A media de temperatura = %.1f",media(sensores,n));
    free(sensores);
    return 0;
}