/*7. Observe o código abaixo.
...
int a=5,
b=2;
troca(&a, &b);
printf("\n%i, %i", a, b);
...
void troca(int *x, int *y){
int aux;
aux= *x;
*x = *y;
*y = aux;
}
a) Responda que valores serão escritos na tela após a execução.
b) Comente cada linha do programa explicando que é ela faz e quais serão os valores as
variáveis envolvidas naquela linha*/