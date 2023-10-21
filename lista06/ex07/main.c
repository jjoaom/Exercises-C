#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//função que le a frase usando stdin
void lerFrase(char frase[100]) {
  printf("Digite uma frase: \n");
  fgets(frase, 100, stdin); // opção para leitura sem problema com espaços
}
//função que conta as vogais e consoantes
void VogaisConsoantes(char frase[100]) {
  //numero de vogais e consoantes igual a 0
  int vogal = 0, consoante = 0;
  int length = strlen(frase);
  //loop for para percorrer pela frase
  for (int i = 0; i < length; i++) {
    //a função tolower é responsável por deixar tudo minusculo
    char letra = tolower(frase[i]);
    //o primeiro if estabelece a leitura somente entre as letras
    if (letra >= 'a' && letra <= 'z') {
      //o segundo if faz a contagem das vogais na frase
      if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
          letra == 'u') {
        vogal++;
        //o restante é somado em consoante
      } else {
        consoante++;
      }
    }
  }
  printf("Número de vogais: %d\n", vogal);
  printf("Número de consoantes: %d\n", consoante);
}

int main() {
  char frase[100];
  lerFrase(frase);
  VogaisConsoantes(frase);
  return 0;
}
