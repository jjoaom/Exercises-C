/*2. Implemente um procedimento preencheNotas que receba e preencha um vetor com as notas
de uma turma de 10 alunos. Faça um procedimento calculaMedia que receba um vetor
preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima
da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa
(main) que declare e preencha as devidas o vetor com valores digitados e acione os
procedimentos.
void preencheNotas(int tam, int vetor[]);
void calculaMedia(int tam, int vetor[]);*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheNotas(int tam, int vetor[]){
    for (int i = 0; i < tam; i++)
    {
        printf("Insira a %dª nota: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
}
void calculaMedia(int tam, int vetor[]){
    float media = 0.0;
    int acima=0;
    for (int i = 0; i < tam; i++)
    {
        media = media + (float)vetor[i];
    }
    media = media / tam;
    for (int i = 0; i < tam; i++)
    {
        if ((float)vetor[i] > media)
        {
            acima++;
        }
        
    }
    printf("A média da turma é %.1f\n", media);
    if (acima <=0)
    {
        printf("Nenhum aluno obteve nota acima da média\n", acima);
    }else if( acima == 1){
        printf("1 aluno obteve a nota acima da média\n");
    }else{
            printf("%d alunos obtiveram nota acima da média\n", acima);
    }
    
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    int tam=0;
    printf("Digite o tamanho do vetor de alunos: ");
    scanf("%d",&tam);
    int *vetor = (int*)malloc(tam * sizeof(int));
    if (vetor == NULL)
    {
        printf("ERRO ao alocar memória");
        return 1;
    }
    
    preencheNotas(tam,vetor);
    calculaMedia(tam, vetor);
    free(vetor);
    return 0;
}