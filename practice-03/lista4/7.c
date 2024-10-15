/*7. Implemente um programa em C que leia dois inteiros, armazenando-os em variáveis. O
programa deve comparar os endereços das variáveis e exibir o maior deles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    int *ptr=&x, *ptr1=&y;
    printf("Digite os valores de X e Y: \n");
    scanf("%d %d", &x, &y);

    if(ptr > ptr1){
        printf("O maior é: %p",ptr);
    }else{
        printf("O maior é: %p", ptr1);
    }
    return 0;
}