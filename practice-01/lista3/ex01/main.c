/*
1. Codifique o algoritmo abaixo em C e escreva na tela do monitor o valor de x ao final da
execução.
algoritmo
declare r, x, y, z : inteiro;
x ← 0;
y ← 10;
z ← 0;
enquanto (z < 3)
r ← y MOD 3;
se (r = 0)
então x ← x+1;
fimse ;
y ← y + 5;
z ← z + 1;
fim-enquanto;
fim-algoritmo
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, x, y, z;
    x = 0;
    y = 10;
    z = 0;
    //enquanto z for menor que 3 o valor de r é igual ao mod de y por 3
    while (z < 3){
        r = y % 3;
    //se r for igual a 0, x tem um incremento
        if(r = 0){
            x = x + 1;
        }
    // y é igual a ele mesmo somado a 5
        y = y + 5;
    //z tem um incremento, z++
        z = z + 1;
    }
    printf("%d %d %d %d", r, x, y, z);
    return 0;
}