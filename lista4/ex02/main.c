/*2. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes,
coletando dados sobre o salário familiar e quantidade de membros (pais +
filhos). Escreva um procedimento que leia esses dados para um número não
determinado de famílias (ler até que salário igual 0), calcule e exiba a média
de salário da população. Faça um programa main que acione o procedimento.

Descrição: a função tem por objetivo pegar a media salarial de todas as familias que forem inseridas(acaba quando o salario é 0) 
entrada: int e float
saida: float
*/

float mediafam() {
  int familia;
  float salario, salarioTotal, media;
  //loop para pegar os valores de salario, salario total de todas as familias e quantidade de membros
  do {
    printf("Quantos membros tem na familia?\n");
    scanf("%d", &familia);
    printf("Qual o salario da familia?\n");
    scanf("%f", &salario);
    //implementa o salario total em outra variavel para nao atrapalhar o fim do loop
    salarioTotal += salario;
    //incrementa a familia para o calculo da media
    familia += familia;
  }while(salario != 0);
  //calcula e exibe a media
  media = salarioTotal / familia;
  printf("A média salarial da população é de: R$%.2f", media);
}
  

int main() {
return mediafam(); 
}