/*6. Escreva um procedimento que recebe por parâmetro 3 valores reais X, Y e Z e que verifique
se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual
é o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do
que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de
triângulo formado observando as seguintes definições:
1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void triangulo(double x, double y, double z){
    if(x == y && x == z && y == z){
        printf("O triângulo é equilátero.\n");
    }else if(x == y || x == z || z == y ){ 
        printf("O triângulo é isósceles.\n");
    }else{
        printf("O triângulo é escalelo.\n");
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    double x,y,z;
    printf("Digite os valores de X, Y e Z: \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    triangulo(x,y,z);
    return 0;
}