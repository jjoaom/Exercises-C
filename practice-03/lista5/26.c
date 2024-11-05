/*10. Escreva um programa que retorne o número de vogais e de consoantes em uma string.
Desconsiderar caracteres numéricos, espaços e pontuação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *palavra = (char*)malloc(30*sizeof(char));
    if(!palavra){
        return 1;
    }
    fgets(palavra,30,stdin);
    palavra[strcspn(palavra,"\n")] = 0;
    int tamanho = strlen(palavra);
    int v=0,c=0;

    for (int i = 0; i < tamanho; i++)
    {
        palavra[i]=tolower(palavra[i]);
        if (isalpha(palavra[i]))
        {
            if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
            {
                v++;
            }else{
                c++;
            }
        }
    }
    printf("Vogais: %d\nConsoantes: %d\n",v,c);


    free(palavra);
    return 0;
}