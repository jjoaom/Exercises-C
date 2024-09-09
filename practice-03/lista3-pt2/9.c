/*
9. Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao
mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses números
mostre a mensagem “Número não é divisível pelos valores”. Apresente também ao final a
quantidade de números divisíveis por 3 e 9, por 2 e por 5

laço for para digitar os 10 numeros e verificar
preciso de um if para verificar as divisões, a questão é como dividir de forma funcional e eficiente.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, j=0,k=0,l=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número inteiro e  maior que zero:", i + 1);
        scanf("%d", &num);
        if (num % 3 == 0 && num % 9 == 0)
        {
            j++;
            printf("O número %d é divisível por 3 e 9.\n",num);
        }
        if(num % 2 == 0){
            k++;
            printf("O número %d é divisivel por 2.\n",num);
        }
        if(num % 5 == 0){
            l++;
            printf("O númeor %d é divisivel por 5.\n",num);
        }
    }
    printf("Quantidade de números divisíveis por 3 e 9 é %d\n",j);
    printf("Quantidade de números divisíveis por 2 é %d\n",k);
    printf("Quantidade de números divisíveis por 5 é %d\n",l);
    
    return 0;
}