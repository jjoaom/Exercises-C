/*
B2. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o
número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa
que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as
notas do aluno que possui a maior média geral dentre os cinco. Salves esses dados em um arquivo
BINÁRIO.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct com dados dos alunos
struct pessoa
{
    char nome[50];
    int matricula,n1,n2,n3;
    float media;
};

int main()
{
    struct pessoa pessoas[5];
    //definicao da struct com 5 alunos
    FILE *arquivo;
    //abre o arquivo binario e avisa se der erro
    arquivo = fopen("read.bin", "wb");
    // pode usar no if !arquivo ou arquivo == NULL para verificar a abertura
    if (!arquivo)
    {
        printf("ERRO ao abrir o arquivo");
        return 1;
    }
    //laço for para pegar o nome, idades e media dos 5 alunos
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0;

        pessoas[i].matricula = (i+1)*7;

        printf("Digite a 1ª nota: \n");
        scanf("%d", &pessoas[i].n1);
        printf("Digite a 2ª nota: \n");
        scanf("%d", &pessoas[i].n2);
        printf("Digite a 3ª nota: \n");
        scanf("%d", &pessoas[i].n3);

        pessoas[i].media = (pessoas[i].n1 + pessoas[i].n2 + pessoas[i].n3)/3.0;

        while(getchar() != '\n');
    }
    //struct para maior media
    struct pessoa maiorMedia = pessoas[0];
    //verificação de media de todos os alunos
    for (int i = 0; i < 6; i++)
    {
        if(pessoas[i].media > maiorMedia.media){
            maiorMedia = pessoas[i];
        }
    }
    //escreve no arquivo binario e fecha ele
    fwrite(&maiorMedia, sizeof(struct pessoa), 1,arquivo);
    fclose(arquivo);

     arquivo = fopen("read.bin", "rb");
    // reabrir arquivo
    if (!arquivo)
    {
        printf("ERRO ao abrir o arquivo");
        return 1;
    }
    struct pessoa alunoLido;
    fread(&alunoLido, sizeof(struct pessoa),1,arquivo);
    fclose(arquivo);
    printf("Aluno com maior media:\n");
    printf("Nome: %s\nMatricula:%d\n", alunoLido.nome,alunoLido.matricula);
    printf("Notas: %d, %d e %d\n", alunoLido.n1, alunoLido.n2,alunoLido.n3);
    printf("Media total: %.1f\n", alunoLido.media);

    return 0;
}