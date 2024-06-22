/*5. Faça um algoritmo que declare uma variável e mostre o valor, endereço e tamanho na memória
para cada um dos seguintes tipos: char, int, float, double, int *, char *, int *, float *, double *.

Exemplo de formato de saída do seu programa:
O Endereço do char ___ é 0x_______ . Esta variável ocupa ___ bytes.
O Endereço do int ___ é 0x_______ . Esta variável ocupa ___ bytes.
O Endereço do float ___ é 0x_______ . Esta variável ocupa ___ bytes.
O Endereço do double ___ é 0x_______ . Esta variável ocupa ___ bytes.
Dica: use a função sizeof(variável) para obter o tamanho da variável em
*/
#include <stdio.h>

int main(){
    //declaração de variaveis
    char a;
    int b;
    float c;
    double d;
    //declaração de ponteiros
    char *pa = &a;
    int *pb = &b;
    float *pc = &c;
    double *pd = &d;
    //pede os valores
    printf("Digite um caractere: ");
    scanf("\n%c", &a);

    printf("Digite um inteiro:");
    scanf("%d",&b);

    printf("Digite um float:");
    scanf("%f",&c);

    printf("Digite um double:");
    scanf("%lf",&d);
    //print com os atributos, o %p é usado para dar o hexa do ponteiro e o %lu é o tamanho de bytes que a variavel ocupa
    printf("O endereço do char %c é %p . Esta variável ocupa %lu bytes.\n", a, pa, sizeof(a));
    printf("O endereço do int %d é %p . Esta variável ocupa %lu bytes.\n",b, pb, sizeof(b));
    printf("O endereço do float %f é %p . Esta variável ocupa %lu bytes.\n",c, pc, sizeof(c));
    printf("O endereço do double %lf é %p . Esta variável ocupa %lu bytes.\n",d, pd, sizeof(d));
}
