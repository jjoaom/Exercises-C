/*5. Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e retorne
o valor da soma S, definida pela equação abaixo:

s = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + n^2 + 1/ n + 3

a) O objetivo do procedimento/função
b) O nome do procedimento/função
c) Os parâmetros de entrada
d) O tipo de dado da saída, caso seja uma função

Descrição: a função tem por objetivo fazer o calculo da equação acima
Entrada:  n
Saída: (int) s

*/
#include <stdio.h>

float func(){
    int n, s;

    printf("Insira um número inteiro e positivo: ");
    scanf("%d", &n);
    //loop para repetir a conta enquanto for menor ou igual 
    for (int i = 2; i <= n; i++)
    {
        // s = 2/4 + 5/5 + 1-/6 + 17/7 + 26/8 + n*n + 1/ n + 3
        //ou seja, o primeiro valor é de 2 / 4 e o ultimo é n*n + 1 / n + 3
        s += n*n / n + 3;
    }
    printf("O resultado é: %d", s);
    return s;
}

int main(){
    return func();
}
