/*
A3. Escreva um procedimento que armazene os pesos máximo, mínimo e a média dos animais,
presentes no arquivo “arquivo-01.txt”, em um novo arquivo “saida.txt”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    FILE *saida;
    //obs o pesominimo foi definido com um valor alto e o maximo com um valor negativo para não conflitarem com os valores dos pesos
    float peso,pesoMin = 1000.0,pesoMax = -1.0 , media = 0.0;
    char linha[100];
    int i=0;
    char *busca;

    //abertura dos arquivos
    arquivo = fopen("arquivo-01.txt", "r");
    if (!arquivo)
    {
        printf("Erro ao abrir arquivo");
        return 1;
    }
    saida = fopen("saida.txt", "w");
    if(!saida){
        printf("Erro ao abrir arquivo");
        return 1;
    }
    //le cada linha do arquivo-01
    while(fgets(linha,sizeof(linha),arquivo)){
        //busca no arquivo por linha o peso máximo
        if(strstr(linha,"Peso máximo:")){
            //sscanf para pegar o valor do peso máximo
            sscanf(busca,"Peso máximo: %f kg", &peso);

            //verificar peso máximo e mínimo
            if(peso  > pesoMax){
                pesoMax = peso;
            }
            if(peso < pesoMin){
                pesoMin = peso;
            }
        }
        //soma de todos os pesos para fazer a media
        media+= peso;
        //contador i para ver a quantidade de animais
        i++;
    }

    //calculo da media
    media = media/i;
    fprintf(saida,"Peso máximo: %.2f kg\n",pesoMax);
    fprintf(saida,"Peso mínimo: %.2f kg\n",pesoMin);
    fprintf(saida,"Média: %.2f kg\n",media);

    fclose(arquivo);
    fclose(saida);

    return 0;


    
    fclose(arquivo);
    fclose(saida);

    

    return 0;
}