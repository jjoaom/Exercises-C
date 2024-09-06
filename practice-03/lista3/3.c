/*3. Escreva um algoritmo que declare um número entre 1 e 20 e peça para o usuário adivinhar qual
é. A cada palpite o programa diz se o número foi mais alto ou mais baixo que o número correto.
Utilize a estrutura e repetição do-while.


passos:
definir um numero random
pedir ao usuario que digite um numero
tem que ter do while
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int random = rand() % 20;
    int guess;
    printf("Tente advinhar um número entre 1 e 20: \n");
    scanf("%d", &guess);
    do
    {
        printf("Digite um número mais alto. \n");
        scanf("%d",&guess);
    } while (guess < random);
    do
    {
        printf("Digite um número mais baixo. \n");
        scanf("%d",&guess);
    } while (guess > random);

    if (guess == random)
    {
        printf("Número correto.");
    }    
    return 0;
}
