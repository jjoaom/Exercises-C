/*
A5. Escreva um programa que exiba, por linha do “arquivo-02.txt”, o nome de todos os felinos
existentes no “arquivo-01.txt” cujo peso máximo esteja dentro dos limites do intervalo.
Obs. 1: Os intervalos são fechados (utilizar <= e/ou >= nas cláusulas).
Obs. 2: O programa deve ser genérico – intervalos não devem ser programados manualmente
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibirFelinosPorIntervalo() {
    FILE *arquivo1 = fopen("arquivo-01.txt", "r");
    FILE *arquivo2 = fopen("arquivo-02.txt", "r");

    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro ao abrir um dos arquivos\n");
        return;
    }

    // Leitura dos intervalos do arquivo-02.txt
    int minPeso, maxPeso;
    char linhaIntervalo[50];

    while (fgets(linhaIntervalo, sizeof(linhaIntervalo), arquivo2)) {
        sscanf(linhaIntervalo, "%d;%d", &minPeso, &maxPeso);
        printf("Intervalo: %d - %d\n", minPeso, maxPeso);

        // Reiniciar a leitura do arquivo-01.txt para cada intervalo
        fseek(arquivo1, 0, SEEK_SET);
        char linhaFelino[256];
        char nomePopular[100];
        int pesoMax;

        while (fgets(linhaFelino, sizeof(linhaFelino), arquivo1)) {
            sscanf(linhaFelino, "%[^;];%*[^;];%*[^;];%*d;%d", nomePopular, &pesoMax);

            // Verifica se o peso máximo está dentro do intervalo
            if (pesoMax >= minPeso && pesoMax <= maxPeso) {
                printf("  - %s\n", nomePopular);
            }
        }
    }

    fclose(arquivo1);
    fclose(arquivo2);
}

int main() {
    exibirFelinosPorIntervalo();
    return 0;
}
