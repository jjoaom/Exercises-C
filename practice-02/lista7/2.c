/******************************************************************************

2) Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5, 5, 4, 3, 2, 1
*******************************************************************************/

#include <stdio.h>

int somatorio(int n) {
    if (n == 0) {
        return 0;  // Somatório de 0 até 0 é 0
    }else{
        somatorio(n-1);
        printf("%d ",n);
        
    }
    
}

int somatorio2(int n) {
    if (n == 0) {
        return 0;  // Somatório de 0 até 0 é 0
    }else{
        
        printf("%d ",n);
        somatorio2(n-1);
        
    }
    
}

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    somatorio(n);
    somatorio2(n);
    return 0;
}
