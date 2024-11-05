/*Para as questões de 7 a 10 considere a criação e uma struct chamada Veiculo que contenha os
seguintes campos:
• id (número de frota) - int
• quilometragem (quilometragem total do veículo) – float
7. Escreva um programa que preencha um vetor de 20 veículos usando a struct para armazenar
as identificações e quilometragem dos veículos de uma empresa de transporte. Depois, o
programa deve solicitar ao usuário um número de identificação para pesquisar no vetor e mostrar
todas as posições onde essa identificação aparece.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Veiculo{
    int id;
    float kmTotal;
};



int main(){
    setlocale(LC_ALL,"Portuguese");
    int numIdem;
    struct Veiculo *veiculos=malloc(20 * sizeof(struct Veiculo));
    if (!veiculos)
    {
        return 1;
    }
    
    for (int i = 0; i < 20; i++)
    {
        printf("Veículo nº%d\n",i+1);
        printf("Insira o número de frota: ");
        scanf("%d",&veiculos[i].id);
        printf("Insira a quilometragem total do veículo:");
        scanf("%f",&veiculos[i].kmTotal);
    }
    printf("Digite o número de identificação: ");
    scanf("%d",&numIdem);

    for (int i = 0; i < 20; i++)
    {
        if (veiculos[i].id == numIdem)
        {
            printf("Id: %d - %dª posição\n",veiculos[i].id,i+1);
        }
        
    }
    free(veiculos);
    return 0;
}