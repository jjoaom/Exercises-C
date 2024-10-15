/*3. Escreva um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem
crescente. Faça um programa main que leia do teclado n conjuntos de 3 valores e acione o
procedimento para cada conjunto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordem(int x, int y, int z){
    int maior = z, meio = y, menor = x;
    if(y > z && y > x){
        maior = y;
    }else if( x > y && x > z){
        maior = x;
    }
    if(y < x && y < z){
        menor = y;
    }else if(z < y && z < x){
        menor = z;
    }
    meio = x + y + z - maior - menor;
    printf("Ordem crescente: %d %d %d\n",menor,meio,maior);


}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n=0,x,y,z;
    while(n <= 0){
        printf("Digite a quantidade de conjuntos: ");
        scanf("%d", &n);
    }
    for(int i=0;i<n;i++){
        printf("Digite 3 valores: \n");
        scanf("%d %d %d", &x,&y,&z);
        ordem(x,y,z);
    }
    return 0;
}