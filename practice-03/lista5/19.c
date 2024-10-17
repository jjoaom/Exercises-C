/*3. Peça ao usuário que insira duas strings. Utilize vetores para armazenar as duas strings.
Concatene as duas strings em uma terceira. Imprima a string resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char *p1 = (char*)malloc(50 * sizeof(char));
    char *p2 = (char*)malloc(30 * sizeof(char));

    if (p1 == NULL || p2 == NULL){
        printf("Erro ao alocar memória");
        return 1;
    }

    printf("Digite a primeira string: ");

    fgets(p1,50,stdin);

    p1[strcspn(p1,"\n")] = 0;

    printf("Digite a segunda string: ");


    fgets(p2,30,stdin);
    p2[strcspn(p2,"\n")]=0;

    //adicionando espaço para concatenar corretamente
    strcat(p1," ");
    strcat(p1,p2);

    printf("%s",p1);

    free(p1);
    free(p2);
    return 0;
}