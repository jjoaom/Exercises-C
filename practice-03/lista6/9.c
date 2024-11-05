/*
Para as questões de 7 a 10 considere a criação e uma struct chamada Veiculo que contenha os
seguintes campos:
• id (número de frota) - int
• quilometragem (quilometragem total do veículo) – float
9. Escreva um algoritmo que crie um vetor para armazenar 5 veículos (struct) e oferece ao usuário
funcionalidades para:
a) Procurar o veículo com a maior quilometragem.
b) Troque o veículo com a maior quilometragem com o da primeira posição.
c) Imprima a lista de quilometragens após a troca.
Cada uma dessas etapas deve ser implementada em funções ou procedimentos separados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Veiculo{
    int id;
    float kmTotal;
};

void preencheVetor(struct Veiculo *veiculos){
    for (int i = 0; i < 5; i++)
    {
        veiculos[i].id = i;
        printf("Insira a quilometragem total do %dº veículo: ",i+1);
        scanf("%f",&veiculos[i].kmTotal);
    }
    
}

int maiorKm(struct Veiculo *veiculos){
    int maior = -100000000;
    int maiorId;
    for (int i = 0; i < 5; i++)
    {
        if (veiculos[i].kmTotal > maior)
        {
            maiorId = i;
        }
        
    }
    return maiorId;
}

void trocaMaior(struct Veiculo *veiculos){
    struct Veiculo temp = veiculos[0];
    int maior = maiorKm(veiculos);
    veiculos[0] = veiculos[maior];
    veiculos[maior] = temp;
    
}

void imprimeVetor(struct Veiculo *veiculos){
    for (int i = 0; i < 5; i++)
    {
        printf("ID do veículo: %d\n", veiculos[i].id);
        printf("Quilometragem total do veículo: %f",veiculos[i].kmTotal);
    }
    
}

void menu(){
    printf("1-Procurar o veículo com a maior quilometragem.\n");
    printf("2-Troque o veículo com a maior quilometragem com o da primeira posição.\n");
    printf("3-Imprima a lista de quilometragens após a troca.\n");
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao = 0;
    struct Veiculo *veiculos =(struct Veiculo*)malloc(5 * sizeof(struct Veiculo));
    if (!veiculos)
    {
        return 1;
    }
    preencheVetor(veiculos);

    menu();
    do
    {
        printf("Escolha uma opção: \n");
        scanf("%d",&opcao);
    } while (opcao < 1 || opcao > 3);
    switch (opcao)
    {
    case 1:
        printf("O veículo com maior quilometragem é: %d\n",maiorKm(veiculos));
        break;
    case 2:
        trocaMaior(veiculos);
        break;
    case 3:
        imprimeVetor(veiculos);
        break;
    
    default:
        break;
    }

    free(veiculos);
    return 0;
}