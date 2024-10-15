/*1. Escreva um procedimento que receba 3 notas de um aluno por parâmetro e uma letra. Se a
letra for "A", o procedimento calcula e escreve a média aritmética das notas do aluno, se for
"P", calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Escreva também um programa
main que leia 3 notas de n alunos e acione o procedimento para cada aluno*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mediaAluno(float n1,float n2, float n3, char media){
    if(media == 'a' || media == 'A'){
        printf("A média aritmética é: %.1f",(n1 + n2 + n3) / 3);
    }else if(media == 'p' || media == 'P'){
        printf("A média ponderada de pesos(5,3 e 2) é: %.1f\n", (n1 * 5 + n2 * 3 + n3 * 2)/ (5 + 3 + 2));
    }else{
        printf("Valor incorreto. Tente novamente");
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float n1=0.0,n2=0.0,n3=0.0;
    int alunos = 0;
    char media ='j';
    while (alunos <= 0)
    {
        printf("Digite a quantidade de alunos: ");
        scanf("%d",&alunos);
    }

    for (int i = 0; i < alunos; i++)
    {
        printf("Digite a 1º nota do %dº aluno: ",i+1);
        scanf("%f", &n1);
        printf("Digite a 2º nota do %dº aluno: ",i+1);
        scanf("%f", &n2);
        printf("Digite a 3º nota do %dº aluno: ", i + 1);
        scanf("%f", &n3);
        printf("Digite A para calcular a média aritmética ou P para calcular a média ponderada:");
        scanf(" %c", &media);
        mediaAluno(n1, n2, n3, media);
    }

    return 0;
}