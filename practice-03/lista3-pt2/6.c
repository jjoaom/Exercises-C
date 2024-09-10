/*
6. A prefeitura da cidade Melhor de Minas fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e quantidade de anos de estudo. A prefeitura deseja saber:
1. média do salário da população;
2. média de anos de estudo;
3. maior salário;
4. percentual de pessoas com salário até R$5000,00.
5. percentual de pessoas com 15 ou mais anos de estudos.
Faça um programa que leia do usuário o salário e a quantidade de anos de estudos de cada
cidadão. O final da leitura de dados se dará com a entrada de um salário negativo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int cidadao=0,estudo=0,cincomil =0, quinzeanos = 0,mediaAnos=0;
    float salario = 0.0,MaiorSal=-10000000.0,MediaSalario =0.0;
    do
    {
        printf("Digite a quantidade de cidadãos: ");
        scanf("%d", &cidadao);

    } while (cidadao <=0);
    for (int i = 1; i <= cidadao; i++)
    {
        //vai pegar o salario de cada cidadão
        printf("Digite o salário do cidadão nº%d: ", i);
        scanf("%f",&salario);
        MediaSalario += salario; //media da população
        if (salario > MaiorSal) //verifica o maior salario
        {
            MaiorSal = salario;
        }
        if (salario <= 5000.00) //media com salario ate 5000.00
        {
            cincomil ++;
        }
        
        //vai pegar os anos de estudo
        printf("Digite os anos de estudo do cidadão nº%d: ",i);
        scanf("%d",&estudo);
        mediaAnos += estudo; //media anos de estudo
        if (estudo >= 15)
        {
            quinzeanos++; //media 15 anos pra cima
        }
        
    }
    printf("A media do salário da população é R$%.1f.\n",MediaSalario/cidadao);
    printf("A média de anos de estudo é de %d anos.\n", mediaAnos/cidadao);
    printf("O maior salário é de R$%.1f\n", MaiorSal);
    printf("%d%% da população tem salário superior a R$5000,00\n",(cincomil/(float)cidadao) * 100);
    printf("%d%% da população tem mais de 15 anos de estudo\n",(quinzeanos/(float)cidadao) * 100);
    return 0;
}