/******************************************************************************
9)Construa uma função que receba uma string. A função deverá calcular o tamanho da
string, isto é, o número de caracteres nela presentes.
(b) Algoritmo iterativo
*******************************************************************************/


#include <stdio.h>
#include <string.h>

int tamanho(char *str){
   int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    printf("Digite uma string: \n");
    fgets(str,sizeof(str),stdin);
    int len = tamanho(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("O tamanho '%s' = %d\n",str,tamanho(str));
    return 0;
}
