/*2. Escreva um programa sistema para registrar a entrada e saída de passageiros em um ônibus.
O motorista informa o número de passageiros que entram e saem em cada parada. O programa
deve calcular e exibir o número total de passageiros no ônibus após todas as paradas*/

#include <stdio.h>

int main(){
    int entrada,saida, paradas;
    int totalP = 0;
    printf("Quantas paradas tem no total:\n");
    scanf("%d", &paradas);
    for (int i = 0; i < paradas; i++)
    {
        printf("Quantos passageiros entraram?\n");
        scanf("%d", &entrada);
        printf("Quantos passageiros sairam?\n");
        scanf("%d", &saida);
        totalP += (entrada - saida);

        if (totalP < 0)
        {
            printf("Erro. O numero total de passageiros nao pode ser negativo");
        }
        
    }
    printf("O total de passageiros = %d", totalP);
    
    return 0;
    }