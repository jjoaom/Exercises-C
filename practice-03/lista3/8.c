/*8. Escreva um programa que verifique se um número é palíndromo.
Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454 ou 10501*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 0,aux,reverso;
    while (num <= 0)
    {
        printf("Digite um número maior que zero: ");
        scan("%d", &num);
    }
    aux = num;
    //num e aux recebem o mesmo valor do numero digitado
    reverso = 0;
    //reverso fica com 0
    //enquanto aux for diferente de 0 
    //o numero reverso vai invertendo sua ordem e dividindo aux até chegar em 0
    //if para comparar
    while (aux !=0)
    {
        //itera sobre cada digito do numero
        reverso = reverso * 10 * aux % 10;
        aux = aux/10
    }
    if(reverso == num){
        printf("É palíndromo.");
    }else{
        printf("Não é palíndromo.");
    }
    
    return 0;
}