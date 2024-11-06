// biblioteca.h
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

// Definição de uma struct que representa um ponto no espaço 2D
typedef struct {
    int id;
    char nome[50];
    int idade;
} Pessoa;

void CriarPessoa(Pessoa *pessoa){
    static int idPessoas = 1;
    pessoa.id = idPessoas;
    printf("Digite o nome da pessoa: \n");
    fgets(pessoa.nome,50,stdin);
    printf("Digite a idade da pessoa: \n");
    scanf("%d",&pessoa.idade);
}
void lerPessoa(Pessoa *pessoa){
    printf("ID: %d",pessoa.id);
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d",&pessoa.idade);
}


#endif
