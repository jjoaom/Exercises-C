/*1. Escreva um programa para calcular o consumo de combustível de um veículo. O usuário
informa a quantidade de litros abastecidos e a distância percorrida desde o último
abastecimento. O programa deve calcular e exibir o consumo médio em quilômetros por litro
(km/l).
*/
#include <stdio.h>

int main(){
    double litros, consumoMedio, distancia;
    printf("Informe a quantidade de combustivel abastecida:\n");
    scanf("%lf", &litros);
    while (litros <= 0 )
    {
        printf("A quantidade deve ser maior que 0. Informe a quantidade de combustivel abastencida:\n");
        scanf("%lf", &litros);
    }
    
    printf("Informe a distancia percorrida em Km:\n");
    scanf("%lf", &distancia);
    while (distancia <= 0 )
    {
        printf("A distancia deve ser maior que 0. Informe a distancia percorrida em Km:\n");
        scanf("%lf", &distancia);
    }
    
    consumoMedio = distancia/litros;
    printf("O consumo medio km/l = %.1lf", consumoMedio);
    return 0;
}