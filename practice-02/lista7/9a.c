/******************************************************************************
9)Construa uma função que receba uma string. A função deverá calcular o tamanho da
string, isto é, o número de caracteres nela presentes.
(a) Algoritmo recursivo
*******************************************************************************/


#include <stdio.h>
#include <string.h>

int tamanho(char *str){
    if(*str == '\0'){
        return 0;
    }else{
        return 1 + tamanho(str + 1);
    }
}

int main()
{
    char str[100];
    printf("Digite uma string: \n");
    scanf("%99s", str);
    
    printf("O tamanho '%s' = %d\n",str,tamanho(str));
    return 0;
}
