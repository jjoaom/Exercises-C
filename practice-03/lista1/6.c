/*6. Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a distância Euclidiana
entre eles.
𝑑 = √(𝑥2 − 𝑥1)² + (𝑦2 − 𝑦1)²*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x1,x2,y1,y2;
    printf("Digite o valor de X1: \n");
    scanf("%f",&x1);
    printf("Digite o valor de Y1: \n");
    scanf("%f",&y1);
    printf("Digite o valor de X2: \n");
    scanf("%f",&x2);
    printf("Digite o valor de Y2: \n");
    scanf("%f",&y2);
    float d = sqrt(pow(x2-x1,2) + pow(y2 - y1,2));
    printf("A distãncia Euclidiana é igual a: %.1f", d);
    return 0;
}