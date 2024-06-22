/*4. Desenvolva um algoritmo que leia um valor n inteiro e positivo e que calcula a seguinte soma
S abaixo:

S = 1 + 1/2 + 1/3 + 1/4 + ... 1/n
Utilize a estrutura e repetição for.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declara a variavel n e pede o valor ao usuario
    int n;
    double s = 0.0;
    printf("Escreva um número inteiro e positivo:");
    scanf("%d", &n);

    //repetição for para realizar o loop até que seja igual ao numero informado pelo usuario
    //incremento é iniciado em 1, o loop é realizado enquanto i for menor ou igual a n, o i é incrementado em 1 a cada loop
    for (int i = 1; i <= n; i++)
    {
        //a cada loop o calculo é feito somando com o valor do loop anterior
        s += 1.0 / i;
    }
    printf("O resultado da soma até 1/%d é igual a %lf", n, s);

    return 0;
}