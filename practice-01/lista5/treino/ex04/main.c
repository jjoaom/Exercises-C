/*4. Identifique o erro no programa a seguir, de modo que seja exibido o valor 10 na tela.*/

#include <stdio.h>

int main(){
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    printf("\n%d \n", &q);
    //o erro se encontra dentro do printf, o &q na verdade deveria ser *p ou **q para que seja exibido o valor correto
    return 0;
}