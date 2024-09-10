/*19. Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    do{
        printf("Digite um número positivo: ");
        scanf("%d",&n);
    } while (n <= 0);

    printf("Divisores de %d: \n", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) //se resto de n por i for 0 é um divisor
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}