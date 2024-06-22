#include <stdio.h>

int Idades(int *m, int *a, int *b, int *c){
    scanf("%d",m);
    scanf("%d",a);
    scanf("%d",b);

    *c = *m - (*a+*b);

    return m,a,b,c;
}


int main(){
    int m,a,b,c;
    Idades(&m,&a,&b,&c);
    if(a > b && a > c){
        printf("%d", a);
    }else if(b > a && b > c){
        printf("%d", b);
    }else{
        printf("&d", c);
    }

    return 0;
}