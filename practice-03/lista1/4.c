/*4. Implemente um programa que leia a quantidade de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcule e imprima o percentual de cada um dos tipos de votos
(brancos, nulos e válidos).*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float eleitores, branco, nulo, valido;
    printf("Digite a quantidade de eleitores: \n");
    scanf("%f",&eleitores);
    printf("Digite a quantidade de votos brancos: \n");
    scanf("%f",&branco);
    printf("Digite a quantidade de votos nulos: \n");
    scanf("%f",&nulo);
    printf("Digite a quantidade de votos válidos: \n");
    scanf("%f",&valido);
    printf("Votos brancos: %.1f%% \n", (branco / eleitores) * 100);
    printf("Votos nulos: %.1f%%\n", (nulo / eleitores) * 100);
    printf("Votos válidos: %.1f%%\n", (valido / eleitores) * 100);
    return 0;
}