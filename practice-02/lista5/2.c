/*
2. Implemente um procedimento preencheNotas que receba e preencha um vetor com as notas
de uma turma de 10 alunos. Faça um procedimento calculaMedia que receba um vetor
preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima
da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa
(main) que declare e preencha as devidas o vetor com valores digitados e acione os
procedimentos.
void preencheNotas(int tam, int vetor[]);
void calculaMedia(int tam, int vetor[]);

Descrição: a função tem por objetivo receber a nota,calcular a media e exibir quem ficou acima da media
Entrada: quantidade de notas de alunos 
Saída: numero dos alunos acima da media

*/
#include <stdio.h>
void preencheNotas(int tam, int vetor[])
{
    for (int i = 0; i < tam; i++)
    {
        printf("Digite a nota do %dº Aluno: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}
void calculaMedia(int tam, int vetor[])
{
    int soma = 0;
    for(int i =0; i < tam;i++){
        soma += vetor[i];
    }
    float media = soma / tam;
    printf("Total da contagem = %d",soma);
    printf("\nA Media da Turma = %.1f",media); 

    int acima = 0;
    for (int i = 0; i < tam; i++)
    {
        if(vetor[i] > media){
            acima++;
        }
    }
    printf("\nQuantidade de Alunos com Nota Acima da Media = %d\n",acima);  
    
}

int main()
{
    int tam = 10;
    int vetor[10];
    scanf("%d",&tam);
    preencheNotas(tam,vetor);
    calculaMedia(tam,vetor);

    return 0;
}