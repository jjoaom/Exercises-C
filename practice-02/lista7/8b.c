/******************************************************************************

8) Construa algoritmos para calcular o k-ésimo termo Fibonacci utilizando as abordagens
abaixo. Antes de iniciar a codificação, busque e planeja, cuidadosamente, as estratégias que
o algoritmo deverá adotar.
(b) Algoritmo iterativo
*******************************************************************************/

#include <stdio.h>

int fibonacci(int n){
    int a = 0, b = 1, aux;
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(int i = 0; i < n; i++) {

        aux = a + b;
        a = b;
        b = aux;

        printf("%d\n", aux);
    }
}

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
