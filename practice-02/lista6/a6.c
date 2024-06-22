/*
A6. Altere o programa anterior para salvar todos os resultados obtidos em um arquivo
denominado “arquivo-03.txt”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void salvarFelinosPorIntervalo() {
    FILE *arquivo1 = fopen("arquivo-01.txt", "r");
    FILE *arquivo2 = fopen("arquivo-02.txt", "r");
    FILE *arquivo3 = fopen("arquivo-03.txt", "w");

    if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL) {
        printf("Erro ao abrir um dos arquivos\n");
        return;
    }

    // Leitura dos intervalos do arquivo-02.txt
    int minPeso, maxPeso;
    char linhaIntervalo[50];

    while (fgets(linhaIntervalo, sizeof(linhaIntervalo), arquivo2)) {
        sscanf(linhaIntervalo, "%d;%d", &minPeso, &maxPeso);
        fprintf(arquivo3, "Intervalo: %d - %d\n", minPeso, maxPeso);

        // Reiniciar a leitura do arquivo-01.txt para cada intervalo
        fseek(arquivo1, 0, SEEK_SET);
        char linhaFelino[256];
        char nomePopular[100];
        int pesoMax;

        while (fgets(linhaFelino, sizeof(linhaFelino), arquivo1)) {
            sscanf(linhaFelino, "%[^;];%*[^;];%*[^;];%*d;%d", nomePopular, &pesoMax);

            // Verifica se o peso máximo está dentro do intervalo
            if (pesoMax >= minPeso && pesoMax <= maxPeso) {
                fprintf(arquivo3, "  - %s\n", nomePopular);
            }
        }
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);
}

int main() {
    salvarFelinosPorIntervalo();
    return 0;
}

