/******************************************************************************

5) Crie uma função recursiva que calcule a soma dos números inteiros de n até m, sendo n e
m limites inferior e superior, respectivamente.
*******************************************************************************/

#include <stdio.h>

int funcao(int n, int b) {
    if (n > b) {
        return 0;
    }else{
        return n + funcao(n+1,b);
    }

}

int main() {
    int n,m;
    printf("Digite o parametro inferior e o superior respectivamente: \n");
    scanf("%d %d", &n, &m);

    int resultado = funcao(n, m);
    printf("A soma dos números de %d até %d é: %d\n", n, m, resultado);
    return 0;
}
