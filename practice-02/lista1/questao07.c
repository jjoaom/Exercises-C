/*7. Implemente um algoritmo com as linhas a seguir e apresente no código-fonte uma explicação
detalhada, com suas palavras, do que acontece em cada uma das linhas:*/

#include <stdio.h>

int main(){
    //A primeira linha está definindo as variaveis a,b,c e d sendo d = 1. Todas são do tipo INTEIRO
    int a,b,c,d=1;
    //A segunda linha está definindo o valor da variavel a para -2
    a = -2;
    //A terceira linha está definindo o valor de b como a * a, ou seja, 4
    b = a*a;
    //A quarta linha está definindo c como um incremento de d, ou seja d + 1
    c = d++;
    //A quinta linha está atribuindo d como um incremento de c e somando mais 5, ou seja 2 + 5 = 7
    d = c++ + 5;
    //A sexta linha está fazendo um pre incremento, que também retorna o valor incrementado para a variavel definida
    d = ++c + 5;
    //A setima linha está imprimindo todos os resultados
    printf ("%d %d %d %d", a, b, c, d);
    return 0;
}