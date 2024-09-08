/*9. Considere os algoritmos abaixo e responda:
*/

/*Algoritimo 1

int count = 0;
int i;
for (i=0; i<n; i++)
if (i%2 == 1)
count++;

*/

/*Algoritimo 2

for (int i=1;i<=n;i*=2)
if (i%2 == 0)
printf(“Olá”);

*/

/*a) Algoritmo 1: Calcule o valor final da variável count considerando n = 7

a)n = 7
enquanto i for menor que 7, i incrementa
i vai incrementar até 6
quanto i for impar(1,3 e 5), count vai incrementar
count == 3
*/

/*
b) Algoritmo 2: Calcule o número de vezes que o texto “Olá” será impresso considerando n = 12

enquanto i=1 for menor ou igual a 12, i = i * 2
ele só vai imprimir Olá se o i for par 
a cada iteração i é multiplicado por ele mesmo * 2
1 * 1 = 2 - 2 * 2 = 4 - 4 * 4 = 8 - após isso passa de 12
logo vai só imprimir quando i estiver em = 2,4 e 8
vai imprimir olá 3 vezes
*/

/*Para cada um dos algoritmos
c)Calcule o número de operações de:
- Declaração de Variáveis
- Atribuições

Algoritimo 1:
declarações de variaveis = 2 (sem contar o n que não foi declarado)
atribuições:
count = 0, i = 0 = 2
as atribuições dependem de N para dar o valor exato
logo
i++ vai acontecer n vezes
count++ só vai acontecer se i for par, logo n/2
n + n/2 + 2 

Algotitimo 2:
declaração de variavel = 1 (sem contar o n que não foi declarado)
atribuições:
i = 1
o laço for vai rodar a cada vez que i multiplicar i * 2 antes que i seja maior que n
1 + log2(n)
*/

/*Para cada um dos algoritmos
d) Calcule o número de operações em função de n para cada um dos algoritmos:
- Comparação "menor que"
- Comparação "igual a"
- Incremento no melhor caso
- Incremento no pior caso

Algoritimo 1:
Menor que "i<n": ocorre no laço for a cada iteração. Ele vai rodar até n + 1, que será a última verificação antes de finalizar o laço
Igual a "i%2 == 1": ocorre dentro do for em cada iteração. Vai ter o número total de N vezes. A cada iteraçao ele verificar se o mod de i é impar
Incremento no melhor caso: count++ só incrementa quanto i é impar. Logo, o melhor caso é quando n é 0 ou todos os i são pares.
Incremento no pior caso: count++ ocorre na metade das iterações, devido a sequencia númerica, logo é n/2.

Algoritmio 2:
Menor que "i<=n": ocorre no faço for a cada iteração. Ele vai rodar até chegar ao valor de N e fara sua última verificação.
Igual a "i%2 == 0 ": ocorre dentro do for em cada iteração. Vai ter o número total de n vezes  e vai verificar se o mod de i é par
Incremento no melhor caso: O incremento de i é feito através da multiplicação. O melhor caso é quando não há nenhum incremento, assim não tem printf. 0 incrementos.
Incremento no pior caso: O incremento no pior caso será quando o i for sempre par, dessa forma sempre será imprimido o Olá devido a iteração do for

*/