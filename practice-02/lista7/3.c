/******************************************************************************
3) Construa uma versão da função anterior de forma que os limites inferior e superior sejam
parametrizados.
*******************************************************************************/

#include <stdio.h>

int funcao(int n, int b) {
    if (n > b) {
        return 0;
    }else{
        printf("%d \t", b);
        funcao(n, b-1);
    }

}


int main() {
    int n,b;
    printf("Digite o parametro inferior e o superior respectivamente: \n");
    scanf("%d %d", &n, &b);
    funcao(n,b);
    return 0;
}
