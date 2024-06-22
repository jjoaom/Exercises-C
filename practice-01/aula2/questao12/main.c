//Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){
    int hora,minuto;
    printf("Insira a hora(formato 24 horas):");
    scanf("%d", &hora);
    minuto = (hora*60);
    printf("Passarem se %d minutos desde o início do dia", minuto);
    return 0;
}