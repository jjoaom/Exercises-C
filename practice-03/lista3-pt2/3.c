/*
3. Escreva um programa, usando o comando for, que receba a idade de n pessoas, calcule e
imprima (a) a quantidade de pessoas em cada faixa etária e (b) a porcentagem de cada faixa etária
em relação ao total de pessoas.
Faixas etárias:
- 1 a 15 anos
- 16 a 30 anos
- 31 a 45 anos
- 46 a 60 anos
- ≥ 61 anos
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idades = 0,age = 0,j=0,k=0,l=0,m=0,n=0;
    do
    {
        printf("Digite a quantidade de pessoas: ");
        scanf("%d",&idades);
    } while (idades <= 0);
    

    for (int i = 1; i <= idades; i++)
    {
            printf("Digite a idade da %dª pessoa: ",i);
            scanf("%d",&age);
        if(age >= 1 && age <= 15){
            j++;
        }else if(age >= 16 && age <= 30){
            k++;
        }else if(age >= 31 && age <= 45){
            l++;
        }else if(age >= 46 && age <= 60){
            m++;
        }else if(age >= 61){
            n++;
        }
        
    }
    printf("Porcentagem de pessoas com idade entre 1 a 15 anos: %.2f%%\n",(float)j / idades * 100);
    printf("Porcentagem de pessoas com idade entre 16 a 30 anos: %.2f%%\n",(float)k / idades * 100);
    printf("Porcentagem de pessoas com idade entre 31 a 45 anos: %.2f%%\n",(float)l / idades * 100);
    printf("Porcentagem de pessoas com idade entre 46 a 60 anos: %.2f%%\n",(float)m / idades * 100);
    printf("Porcentagem de pessoas com idade com mais de 61 anos: %.2f%%\n",(float)n / idades * 100);
    return 0;
}