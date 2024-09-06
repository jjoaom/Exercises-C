/*6. Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, a = 0, b = 1,next;
    printf("Digite o número de elementos da sequencia fibonacci: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("%d\n",a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}