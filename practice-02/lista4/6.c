/*
6. Escreva um procedimento chamado teste que recebe um valor n passado “por valor” e dois
inteiros b e k passados “por referência". Seu procedimento deve armazenar em b e k valores tais
que bk = n e b seja o menor valor possível.
Implemente também uma função main que solicita ao usuário o valor de n, chama o
procedimento criado e depois imprime o resultado.
*/
#include <stdio.h>

void teste(int n, int *b, int *k) {
    //atribuição dos ponteiros
    *b = 1;
    *k = n;
    // Calcula o menor valor possível para b
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            *b = i;
            *k = n / i;
        }
    }
}

int main() {
    int n, b, k;
    
    //Pede o valor de n
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    // Chama o procedimento teste
    teste(n, &b, &k);
    // Imprime o resultado
    printf("b = %d, k = %d\n", b, k);
    return 0;
}
