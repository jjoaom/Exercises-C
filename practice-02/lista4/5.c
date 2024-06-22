/*
5. Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m, passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor número primo maior do que m
Implemente também uma função main que solicita ao usuário o valor de m, chama o
procedimento primo e depois imprime o resultado.

*/
#include <stdio.h>

void primo(int m, int *p1, int *p2) {
    *p1 = *p2 = 0; // Inicializa p1 e p2 com 0
    
    // Encontra o maior número primo menor que m (p1)
    for (int i = m - 1; i >= 2; i--) {
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
            }
        }
        if (primo) {
            *p1 = i;
        }
    }
    
    // Encontra o menor número primo maior que m (p2)
    for (int i = m + 1;; i++) {
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
            }
        }
        if (primo) {
            *p2 = i;
        }
    }
}

int main() {
    int m, p1, p2;
    
    // Solicita o valor de m ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &m);
    
    // Chama o procedimento primo
    primo(m, &p1, &p2);
    
    // Imprime o resultado
    printf("O maior número primo menor que %d é: %d\n", m, p1);
    printf("O menor número primo maior que %d é: %d\n", m, p2);
    
    return 0;
}
