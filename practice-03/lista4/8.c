/*8. Faça um procedimento que leia 3 números inteiro (a, b, c). Para cada valor lido, mostre o
nome da variável, o endereço e o seu valor, conforme exemplificado a seguir:
NOME_VARIAVEL ENDEREÇO VALOR
a 0000fff0 5
b 0000fff4 9
c 0000fff8 1
Invoque o procedimento por meio do programa principal/main.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void procedimento(){
    int a,b,c;
    printf("Digite os valores de a,b e c: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a\t%p\t%d\n",&a,a);
    printf("b\t%p\t%d\n",&b,b);
    printf("c\t%p\t%d\n",&c,c);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    procedimento();
    return 0;
}