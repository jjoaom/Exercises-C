/******************************************************************************

1) Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5,
*******************************************************************************/

#include <stdio.h>

int somatorio(int n) {
    if (n == 0) {
        return 0;
    }else{
        somatorio(n-1);
        printf("%d ",n);

    }

}

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    somatorio(n);
    return 0;
}
