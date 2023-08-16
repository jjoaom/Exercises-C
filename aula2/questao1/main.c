#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, res1, res2;
    printf("Digite um numero maior que 0:\n");
    scanf("%d", &x);
    res1 = sqrt(x);
    res2 = pow(x, 1.0 * 3.0);
    printf("Respectivamente, a raiz quadrada e a raiz cubica do numero %d eh %d e %d", x, res1, res2);
    return 0;
}
