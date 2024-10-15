/*9. Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m,
passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve
armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor
número primo maior do que m.
Implemente também uma função main que solicita ao usuário o valor de m, chama o
procedimento primo e depois imprime o resultado
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int verificaPrimo(int num){
    if(num <= 1){
        return 0; //nao eh primo se for menor ou igual a 1
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0){
            return 0; //se encontrar um divisor é primo
        }}
    return 1; //se não encontrar nenhum divisor é primo
}

void primo(int m, int *p1, int *p2){
    for (int i = m-1; i >=2; i--)
    {
        if (verificaPrimo(i)){
            *p1=i;
            break;
        }}
    for (int i = m + 1;; i++) {
        if (verificaPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Portuguese");
    int m;
    int p1 = -1, p2 = -1; 

    printf("Digite o valor de m: \n");
    scanf("%d", &m);

    primo(m, &p1, &p2); 

    printf("O maior primo menor que %d é: %d\n", m, p1);
    printf("O menor primo maior que %d é: %d\n", m, p2);

    return 0;
}