/*10. Escreva um procedimento chamado teste que recebe um valor n passado “por valor” e dois
inteiros b e k passados “por referência". Seu procedimento deve armazenar em b e k valores
tais que bk = n e b seja o menor valor possível.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste(int n, int *b, int *k){
    //não compreendi o enunciado por completo
    *b = n;
    *k = b;
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,b,k;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    teste(n,&b,&k);
    return 0;
}