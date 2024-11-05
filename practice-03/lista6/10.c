/*
Para as questões de 7 a 10 considere a criação e uma struct chamada Veiculo que contenha os
seguintes campos:
• id (número de frota) - int
• quilometragem (quilometragem total do veículo) – float
10. Amplie a struct Veículo adicionando o campo capacidade, que irá representar o número de
passageiros. Implemente um procedimento preencheCapacidade que preencha um vetor com 10
veículos, armazenando suas capacidades. Em seguida, faça um procedimento
copiaGrandesCapacidades que copie veículos com capacidade acima de 30 passageiros para um
novo vetor de até 10 elementos. Ao final, mostre o vetor resultante.
A seguir a sugestão de assinatura dos procedimentos que deverão ser criados.
void preencheCapacidade(Veiculo vetor[], int length);
void copiaGrandesCapacidades(Veiculo vetor[], int length, Veiculo vetorGrandes[]);*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Veiculo
{
    int id;
    float kmTotal;
    int capacidade;
};

void preencheCapacidade(struct Veiculo *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i].id = i;
        vetor[i].kmTotal = 0;
        printf("Insira a capacidade de passageiros do %dº veículo: ",i+1);
        scanf("%d",&vetor[i].capacidade);
    }
    
}
void copiaGrandesCapacidades(struct Veiculo *vetor, int tamanho, struct Veiculo *vetorGrandes[]){
    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i].capacidade > 30 && contador < 10){
        vetorGrandes[contador] = &vetor[i];
        contador++;
        }
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tamanho = 0;
    do
    {
        printf("Insira o tamanho do vetor: ");
        scanf("%d",&tamanho);
    } while (tamanho <= 0 || tamanho > 10);
    
    struct Veiculo *veiculos=(struct Veiculo*)malloc(tamanho*sizeof(struct Veiculo));
    struct Veiculo *veiculosGrandes=(struct Veiculo*)malloc(10*sizeof(struct Veiculo));
    if (!veiculos || !veiculosGrandes)
    {
        return 1;
    }
    preencheCapacidade(veiculos,tamanho);
    copiaGrandesCapacidades(veiculos,tamanho,veiculosGrandes);

    for (int i = 0; i < 10; i++)
    {
        printf("Veículo nº%d - Capacidade: %d pessoas\n",veiculosGrandes[i].id,veiculosGrandes[i].capacidade);
    }
    

    free(veiculos);
    free(veiculosGrandes);
    return 0;
}