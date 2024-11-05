/*
Para as questões de 7 a 10 considere a criação e uma struct chamada Veiculo que contenha os
seguintes campos:
• id (número de frota) - int
• quilometragem (quilometragem total do veículo) – float
8. Escreva um programa que utilize alocação dinâmica para criar um vetor de 100 números de
série de modelos de veículos cujos números são múltiplos de 4, mas que não terminam com o
dígito 4. Certifique-se de que o vetor tenha exatamente 100 modelos e, ao final, libere a memória
alocada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Veiculo{
    int id;
    float kmTotal;
};

void modelosVeiculos(struct Veiculo *veiculos){
    int contador = 0;
    for (int i = 4; contador < 100; i= i + 4)
    {
        if (i % 10 != 4)
        {
            veiculos[contador].id = i;
            veiculos[contador].kmTotal = 0;
            contador++;
        }
        
    }
    
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    struct Veiculo *veiculos =(struct Veiculo*)malloc(100*sizeof(struct Veiculo));
    if (!veiculos)
    {
        return 1;
    }
    
    modelosVeiculos(veiculos);
    printf("Ids veículos: \n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n",veiculos[i].id);
    }
    
    free(veiculos);
    return 0;
}