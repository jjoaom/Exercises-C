/******************************************************************************

6) Crie uma versão recursiva para o algoritmo que trata o problema do cálculo da
potenciação.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int potencia(int n, int b) {
    if (n == 0) {
        return 1;
    }
    return n * potencia(n,b);


}

int main() {
    int n,m;
    printf("Digite o parametro inferior e o superior respectivamente: \n");
    scanf("%d %d", &n, &m);

    printf("%d",potencia(n,b));
    return 0;
}
