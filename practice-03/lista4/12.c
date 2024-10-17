/*2. Escreva um procedimento que recebe a média final de um aluno, identifica e exibe o seu
conceito, conforme a tabela abaixo. Faça um programa que leia a média de n alunos, acionando
o procedimento para cada um deles. O valor de n deve ser lido do teclado no main.
Nota Conceito
até 39 F
40 a 59 E
60 a 69 D
70 a 79 C
80 a 89 B
à partir de 90 A
*/

#include <stdio.h>
#include <locale.h>

void media(int nota){
    if (nota <= 39){
        printf("F\n");
    }else if(nota >= 40 && nota <=59){
        printf("E\n");
    }else if(nota >= 60 && nota <=69){
        printf("D\n");
    }else if(nota >= 70 && nota <=79){
        printf("C\n");
    }else if(nota >= 80 && nota <=89){
        printf("B\n");
    }else if(nota >= 90){
        printf("A\n");
    }
    
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int alunos,notaFinal;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &alunos);
    for (int i = 0; i < alunos; i++)
    {
        printf("Digite a nota final do aluno %d: ", i+1);
        scanf("%d",&notaFinal);
        media(notaFinal);
    }
    
    return 0;
}