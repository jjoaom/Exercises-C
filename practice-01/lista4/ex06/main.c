/*6. Escreva um procedimento que recebe por parâmetro 3 valores reais X, Y e Z e que verifique se
esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é
o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte
propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma
do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo
formado observando as seguintes definições:
1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;
Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para
cada triângulo, acione o procedimento.

a) O objetivo do procedimento/função
b) O nome do procedimento/função
c) Os parâmetros de entrada
d) O tipo de dado da saída, caso seja uma função

Descrição: a função vai pegar os 3 valores e ver qual o tipo de triangulo
Entrada: float
Saída: printf

*/
#include <stdio.h>


float func(){
    float x,y,z;
    //começa pedindo e armazenando os 3 valores
    printf("Digite três numeros reais:\n");
    scanf("%f %f %f",&x,&y,&z);
    //verifica se todos os numeros sao iguais
    if(x == y && y == z){
        printf("Triangulo equilátero");
    //verifica se tem 2 numeros iguais
    }else if(x==y || x == z || y==z){
        printf("Triangulo Isósceles");
    //verifica se todos são diferentes
    }else if(x != y && x != z && y != z){
        printf("Triangulo escaleno");
    }else{
        printf("Valor inválido");
    }
    return 0;
}


int main(){
    //realiza a função
    return func();
}