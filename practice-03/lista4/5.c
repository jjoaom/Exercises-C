/*5. Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e
retorne o valor da soma S, definida pela equação abaixo:
S= 2
4 + 5
5 + 10
6 + 17
7 + 26
8 + ...+ n2 +1
n+3
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valorS(int n){
    float s = 0.0;
    for(int i =2;i<=n;i++){
        s+= (float)(i*i + 1) /(i+3);
    }
    return s;
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int x = 0;
    while(x<=0){
        printf("Digite um valor inteiro positivo: ");
        scanf("%d",&x);
    }
    printf("O valor de S = %f", valorS(x));
    return 0;
}