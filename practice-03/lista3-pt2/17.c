/*17. Escreva um programa que solicite ao usuário três números inteiros a, b e c, em que a seja
maior que 1. O programa deve somar todos os inteiros entre b e c que sejam divisíveis por
a.  
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b,c,temp,soma;
    do
    {
        printf("Digite o valor de a: ");
        scanf("%d",&a);
    } while (a <= 1);
    do
    {
        printf("Digite o valor de b e c: ");
        scanf("%d",&b);
        scanf("%d",&c);
    } while (b <= 0 || c <= 0);
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    for (int i = b ; i <= c; i++)
    {
        if (i % a == 0)
        {
            soma += i;
            printf("Divisivel: %d\n",i);
        }
        
    }
    
    
    printf("A soma de todos os inteiros divisíveis por %d entre %d e %d é %d\n", a, b, c, soma);
    
    return 0;
}
