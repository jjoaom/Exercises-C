/*3. Faça um algoritmo para consulta de horários de ônibus em uma cidade. O usuário informa o
número da linha de ônibus e o dia da semana (segunda a sexta ou sábado/domingo). O
programa deve exibir os horários de partida do ônibus para essa linha no dias especificado. Crie
uma variável com horários pre-definidos para apresentar como resposta. Considere uma
variável para seg a sex, uma para sab e outra para dom.*/

#include <stdio.h>

int main(){
    int linhas, dias;

    printf("Consulta de horario de onibus. Digite:\n1-Linha Norte\n2-Linha Sul\n3-Linha Centro\n");
    scanf("%d", &linhas);
    while (linhas <= 0 || linhas >= 4)
    {
        printf("Valor incorreto.\nDigite:\n1-Linha Norte\n2-Linha Sul\n3-Linha Centro\n");
        scanf("%d", &linhas);
    }
    printf("Qual itinerario:\n1-Seg a Sex\n2-Sabado\n3-Domingo\n");
    scanf("%d", &dias);
    while (dias <= 0 || dias >= 4)
    {
        printf("Valor incorreto.\nQual itinerario:\n1-Seg a Sex\n2-Sabado\n3-Domingo\n");
        scanf("%d", &dias);
    }
    switch (linhas)
    {
    case 1:
        if(dias == 1){
            printf("Horarios Linha Norte itinerario Seg a Sex:\n5 as 23\n");
        }else if(dias == 2){
           printf("Horarios Linha Norte itinerario Sabado:\n6 as 22\n"); 
        }else if(dias == 3){
           printf("Horarios Linha Norte itinerario Sabado:\n7 as 20\n"); 
        }
        break;
    case 2:
         if(dias == 1){
            printf("Horarios Linha Sul itinerario Seg a Sex:\n5 as 23\n");
        }else if(dias == 2){
           printf("Horarios Linha Sul itinerario Sabado:\n6 as 22\n"); 
        }else if(dias == 3){
           printf("Horarios Linha Sul itinerario Sabado:\n7 as 20\n"); 
        }
        break;
    case 3:
        if(dias == 1){
            printf("Horarios Linha Centro itinerario Seg a Sex:\n5 as 23\n");
        }else if(dias == 2){
           printf("Horarios Linha Centro itinerario Sabado:\n6 as 22\n"); 
        }else if(dias == 3){
           printf("Horarios Linha Centro itinerario Sabado:\n7 as 20\n"); 
        }
        break;
    default:
        break;
    }
    return 0;
}