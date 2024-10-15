/*4. Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e
retorne o valor de E, definido pela equação abaixo
E=1+ 1
1 ! + 1
2 ! + 1
3! + ...+ 1
n!
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float valorE(int x){
    float e = 1.0;
    float f = 1.0;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
        e += 1.0/f;
    }
    return e;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int x = 0;
    while(x<=0){
        printf("Digite um valor inteiro positivo: ");
        scanf("%d",&x);
    }
    printf("O valor de E = %f", valorE(x));
    return 0;
}