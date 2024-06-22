/******************************************************************************

8) Construa algoritmos para calcular o k-ésimo termo Fibonacci utilizando as abordagens
abaixo. Antes de iniciar a codificação, busque e planeja, cuidadosamente, as estratégias que
o algoritmo deverá adotar.
(a) Algoritmo recursivo
*******************************************************************************/

// 1 2 3 4 5 6 7 8  9  10
// 0 1 1 2 3 5 8 13 21 33

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if (n == 2)
        {
            return 1;
        }
        else
        {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}

int main()
{
    int n;
    printf("Digite um numero maior que zero: \n");
    scanf("%d", &n);
    printf("O termo %d eh %d\n", n, fibonacci(n));
    return 0;
}
