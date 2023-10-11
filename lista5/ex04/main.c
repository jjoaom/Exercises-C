/*

4. Implemente um programa que leia três valores inteiros e invoque um
procedimento que receba estes 3 valores de entrada e “retorne por referência” o
maior valor na primeira variável e o menor valor na segunda variável. Escreva o
conteúdo das 2 variáveis na tela no programa principal/main.

*/
//função do tipo void pois não retorna nada
// parametro de ponteiro inteiro para maior e menor valor
void comparaValores(int *maior, int *menor) {
  int a, b, c; 
  printf("Escreva 3 números: \n");
  scanf("%d %d %d", &a, &b, &c);
  // if para pegar o maior valor
  if (a > b && a > c) {
    *maior = a;
  } else if (b > c && b > a) {
    *maior = b;
  } else if (c > a && c > b) {
    *maior = c;
  }
  // if para pegar o menor valor
   if (a < b && a < c) {
    *menor = a;
  } else if (b < c && b < a) {
    *menor = b;
  } else if (c < a && c < b) {
    *menor = c;
  }
}

int main() {
  //chama a função e atribui os valores da memoria maior e menor para as variaveis
  int maior, menor;
  comparaValores(&maior, &menor);

  printf("Maior valor %d \n", maior);
  printf("Menor valor %d \n", menor);

  return 0;
}