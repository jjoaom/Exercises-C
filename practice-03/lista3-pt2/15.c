/*15. Escreva um programa que receba dez números inteiros do teclado e diga quantos são
pares e quantos são ímpares.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,par =0,impar=0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o %dº número: ",i);
        scanf("%d",&n);
        if (n % 2 == 0)
        {
            par++;
        }
        if (n % 2 == 1)
        {
            impar++;
        }
    }
    printf("Quantidade de números pares: %d\n",par);
    printf("Quantidade de números impares: %d\n",impar);
    return 0;
}
