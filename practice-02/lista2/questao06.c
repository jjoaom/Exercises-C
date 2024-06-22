/*6. Escreva um programa que receba três valores do usuário: A, B e C. Seu programa deve verificar
se C é divisível por A e/ou B. Caso C seja divisível por A e B, imprima na tela “Divisível por ambos”.
Caso C seja divisível por A ou por B, mas não por ambos, imprima na tela “Divisível por um”. Caso
C não seja divisível nem por A nem por B, imprima na tela “Não é divisível”. Caso o usuário digite
um valor negativo ou zero para A e/ou B, imprima na tela “Valor inválido” e finalize a execução
do programa*/

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    while (a <= 0 || b <= 0)
    {
        printf("Valor invalido");
        return 1;
    }
    
    if(c % a == 0 && c % b == 0){
        printf("Divisivel por ambos");
    }else if(c % a == 0 || c % b == 0){
        printf("Divisivel por um");
    }else if(c % a != 0 && c % a != 0){
        printf("Nao e divisivel");
    }else{
        printf("Valor invalido");
    }
    return 0;
}