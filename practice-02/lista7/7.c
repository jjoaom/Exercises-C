/******************************************************************************

7) Crie uma função recursiva que calcule o fatorial de um número natural N.

*******************************************************************************/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n-1);
    
    
}

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fatorial(n));
    return 0;
}
