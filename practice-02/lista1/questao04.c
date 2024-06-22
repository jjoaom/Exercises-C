#include <stdio.h>

int main() {
    int eleitores, branco, nulo, valido;
    float resb, resn, resv;

    printf("Informe a quantidade de eleitores:\n");
    scanf("%d", &eleitores);
    printf("Informe a quantidade de votos brancos:\n");
    scanf("%d", &branco);
    printf("Informe a quantidade de votos nulos:\n");
    scanf("%d", &nulo);
    printf("Informe a quantidade de votos validos:\n");
    scanf("%d", &valido);

    resb = ((float)branco / eleitores) * 100;
    resn = ((float)nulo / eleitores) * 100;
    resv = ((float)valido / eleitores) * 100;

    printf("O municipio tem %d eleitores\n", eleitores);
    printf("Votos brancos: %.2f%%\n", resb);
    printf("Votos nulos: %.2f%%\n", resn);
    printf("Votos validos: %.2f%%\n", resv);

    return 0;
}
