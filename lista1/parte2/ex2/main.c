/*2. Implemente um algoritmo que converta uma temperatura Fahrenheit em grau
Celsius: 𝐺𝑟𝑎𝑢𝑠 𝐶𝑒𝑙𝑠𝑖𝑢𝑠 = 5 9 ⋅ (𝐹𝑎ℎ𝑟𝑒𝑛ℎ𝑒𝑖𝑡 − 32)*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float c, f;
  printf("Bem vindo ao conversor de fahrenheit para celsius. Insira a "
         "temperatura em ºF:\n");
  scanf("%f", &f);
  c = (5.0 / 9.0) * (f - 32);
  printf("A temperatura convertida para Celsius é : %f", c);
  return 0;
}