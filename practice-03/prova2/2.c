#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Filme{
    char titulo[40];
    int date;
    float nota;
};
void printFilme(struct Filme filmes){
    printf("Titulo: %s\n",filmes.titulo);
    printf("release date: %d\n",filmes.date);
    printf("nota: %.1f",filmes.nota);
}

void preencherFilme(struct Filme filmes, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        fgets(filmes[i].titulo,40,stdin);
        scanf("%d",&filmes[i].date);
        scanf("%f",&filmes[i].nota);
    }
    
}
int main(){
    int tf=2;
    struct Filme *filmes = (Struct Filme*)malloc(tf * sizeof(struct Filme));
    if (!filmes)
    {
        return 1;
    }
    preencherFilme(filmes,tf);
    for (int i = 0; i < tf; i++)
    {
        printFilme(filmes[i]);
    }
    free(filmes);
    return 0;
}