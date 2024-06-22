/*
1. Construa uma função que receba a idade de uma pessoa, calcule o retorne o número de dias por
ela vividos até o seu último aniversário (fique à vontade para ignorar o impacto dos anos bissextos).
Main: a função main deverá ler da tela a data no formato d/m/a e posteriormente invocar a função
criada. Feito isso, o algoritmo deverá exibir na tela um número inteiro.


Descrição: a função tem por objetivo calcular o número de dias vivido por uma pessoa com base em sua data de nascimento.
Entrada: n (inteiro)
Saída: inteiro
*/
#include <stdio.h>
int calculaDias(int diaatual, int mesatual, int anoatual, int dianiver, int mesniver, int anoniver){
    int dataatual, anosvividos, diasporAno, diaNiver, meses, diaMes, dias;
    //calculo para ver quantos anos a pessoa viveu
    anosvividos = anoatual - anoniver;
    //calculo para ver a quantidade de anos que a pessoa viveu
    diasporAno = (anosvividos % 4) + (anosvividos * 365);
    //calculo dos meses
    if(mesatual > mesniver){
        meses = mesatual - mesniver;
    }else{
        meses = mesniver - mesatual;
    }
    //calculo dos dias
    if(diaatual > dianiver){
        dias = diaatual - dianiver;
    }else{
        dias = dianiver - diaatual;
    }
    diaNiver = diaMes + diasporAno + dias;
    printf("Voce viveu %d dias",diaNiver);
}

int main(){
    int diaatual = 0,mesatual = 0,anoatual = 0, dianiver = 0, mesniver = 0, anoniver = 0;
    while(dianiver <= 0 || mesniver <= 0 || anoniver <= 0){
        printf("Insira a data de seu nascimento - formato (dd/mm/aa):\n)");
        scanf("%d/%d/%d",&dianiver, &mesniver, &anoniver);
    }

    while(diaatual <= 0 || mesatual <= 0 || anoatual <= 0){
        printf("Insira a data de hoje - formato (dd/mm/aa):\n)");
        scanf("%d/%d/%d",&diaatual, &mesatual, &anoatual);
    }
    calculaDias(diaatual,mesatual,anoatual,dianiver,mesniver,anoniver);

    return 0;
}