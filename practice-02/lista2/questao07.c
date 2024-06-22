/*7. Escreva um programa que calcule as raízes da equação do 2º grau (ax² + bx + c); os valores de
a, b e c são fornecidos pelo usuário.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta,x1,x2;
    printf("Vamos calcular uma equacao de 2 grau. Digite os valores de a,b e c, respectivamente:\n");
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b,2) - 4 * a * c;
    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao %.2f e %.2f\n", x1,x2);
    }else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("A raiz dupla e %.2f\n", x1);
    }else
    {
        printf("Não ha raizes reais\n");
    }
    
    return 0;
}