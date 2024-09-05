/*7. Implemente um algoritmo com as linhas a seguir e apresente no código-fonte uma explicação
detalhada, com suas palavras, do que acontece em cada uma das linhas:
Linha Comando Explicação
1 int a,b,c,d=1;
2 a = -2;
3 b = a*a;
4 c = d++;
5 d = c++ + 5;
6 d = ++c + 5;
7 printf ("%d %d %d %d", a, b, c, d);*/

#include <stdio.h>

int main()
{
    //Declaração das variaveis a,b,c e d sendo d = 1
    int a, b, c, d = 1;
    //a pega o valor -2
    a = -2;
    // b pega o valor 4 (-2 * -2)
    b = a * a;
    //c pega o valor 2 (d++ = 1 + 1)
    c = d++;
    //d fica com o valor de 7 
    d = c++ + 5;
    d = ++c + 5;
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}