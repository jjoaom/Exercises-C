#include "./biblioteca.h"

void menu(){
    printf("Menu: \n");
    printf("1_Opção 1\n");
    printf("2_Opção 2\n");
    printf("3_Opção 3\n");
    printf("4_Opção 4\n");
    printf("Escolha uma opção: \n");
}

void abrirArquivo(FILE *arquivo){
    if (!arquivo)
    {
        printf("Erro ao abrir o arquivo: \n");
        return 1;
    }
    
}

int main(){
    setlocale(LC_ALL,"PT_BR");
    int opcao,escolha = 4;
    do
    {
        menu();
        scanf("%d",&opcao);
    } while (opcao <= 0 || opcao > escolha);
    FILE *arquivo;
    abrirArquivo(arquivo);
    fclose(arquivo);
    Pessoa teste;
    CriarPessoa(&teste);
    lerPessoa(&teste);
    return 0;
}