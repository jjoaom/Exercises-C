/*3. Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
(produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.
Pontifícia Universidade Católica de Minas Gerais
Instituto de Ciências Exatas e Informática (ICEI)
Engenharia de Computação / Engenharia de Software
Disciplina: Algoritmos e Estruturas de Dados I
Indique o estado pelo primeiro caractere da sigla.
Estado MG SP RJ ES
Imposto 7% 12% 15% 8%
Trate/rejeite as entradas inválidas.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    double produto, valorFinal, imposto;
    char estado;
    printf("Digite o valor do produto:\n");
    scanf("%lf",&produto);
    printf("Digite 'm' para MG, 's' para SP, 'r' para RJ ou 'e' para ES\n");
    scanf(" %c",&estado);
    estado = tolower(estado);
    switch (estado)
    {
    case 'm':
        imposto = 0.07;
        break;
    case 's':
        imposto = 0.12;
        break;
    case 'r':
        imposto = 0.15;
        break;
    case 'e':
        imposto = 0.08;
        break;
    default:
        printf("Erro. Estado invalido.");
        break;
    }
    valorFinal = produto + (produto * imposto);
    printf("O valor final é R$%.2lf", valorFinal);
    return 0;
}