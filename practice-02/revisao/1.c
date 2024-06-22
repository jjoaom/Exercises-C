/*Escreva uma função em C chamada
soma que recebe dois inteiros como
parâmetros e retorna a soma desses
números

Escreva uma função em C chamada
maior que recebe três inteiros como
parâmetros e retorna o maior deles.


*/


#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;
}

int maior(int a, int b, int c){
    int maiorres = a;
    if(b > maiorres){
        maiorres = b;
    }else if(c > maiorres){
        maiorres = c;
    }
    return maiorres;
}

int main(){
    int n1,n2,res,a,b,c,maiorres;
    printf("Digite 2 numeros:\n");
    scanf("%d %d",&n1, &n2);
    res = soma(n1,n2);
    printf("%d + %d = %d\n",n1,n2,res);

    printf("Digite 3 numeros:\n");
    scanf("%d %d %d",&a,&b,&c);
    maiorres = maior(a,b,c);
    printf("o maior: %d",maiorres);
    return 0;
}