/*6. Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a distância Euclidiana
entre eles.
*/
#include <stdio.h>
#include <math.h>

int main(){
    double x,y,a,b,d;
    printf("Insira o valor de X e Y do primeiro ponto:\n");
    scanf("%lf %lf", &x, &y);
    printf("Insira o valor de X e Y do segundo ponto:\n");
    scanf("%lf %lf", &a, &b);
    d = sqrt(pow(x-a,2)+ pow(y-b,2));
    printf("A distancia euclidiana é %.1lf", d\n);
    return 0;
}