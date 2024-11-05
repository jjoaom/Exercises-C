/*8. Solicite ao usuário que insira uma frase e duas palavras: uma palavra a ser buscada na frase e
outra palavra para substituir a palavra encontrada. Utilize vetores para armazenar a frase e
as palavras. Busque a palavra na frase e substitua todas as ocorrências pela segunda palavra.
Imprima a frase resultante após a substituição.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void removeLinha(char *palavra){
    palavra[strcspn(palavra,"\n")] = 0;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *frase =(char*)malloc(70*sizeof(char));
    char *busca =(char*)malloc(20*sizeof(char));
    char *troca=(char*)malloc(20*sizeof(char));
    if(!frase || !busca || !troca){
        return 1;
    }
    printf("Digite uma frase: ");
    fgets(frase,70,stdin);
    removeLinha(frase);

    printf("Digite a palavra a ser buscada na frase: ");
    fgets(busca,20,stdin);
    removeLinha(busca);

    printf("Digite a palavra para substituir: ");
    fgets(troca,20,stdin);
    removeLinha(troca);


    free(frase);
    free(busca);
    free(troca);
    return 0;
}