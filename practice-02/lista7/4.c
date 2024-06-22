/******************************************************************************
4) Construa uma função recursiva que escreva em ordem decrescente os inteiros de N até 0.
*******************************************************************************/

#include <stdio.h>

int decrescer(int n) {
    if (n == 0) {
        return 0;  // Somatório de 0 até 0 é 0
    }else{

        printf("%d ",n);
        decrescer(n-1);

    }

}

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    printf("%d", decrescer(n)); 
    return 0;
}
