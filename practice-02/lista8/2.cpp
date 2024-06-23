/*2) Modifique a classe Ingrediente para incluir um construtor que receba nome, quantidade e
unidade como parâmetros, além de construtores padrão e de cópia, e um destrutor.
Adicione verificações nos métodos setters para garantir que a quantidade não seja
negativa e que unidade seja uma unidade válida (como kg, litros, unidades). Teste a classe
criando objetos de diferentes maneiras, usando diferentes construtores, e imprimindo suas
informações.*/

#include <iostream>
#include <string>

using namespace std;

//classe com os atributos privados de ingrediente
class Ingrediente {
private:
  string nome;
  double quantidade;
  string unidade;
//metodo publico associando os ingredientes privados da classe
public:
  Ingrediente(string nomeIng, string unidadeIng, double quantidadeIng) {
    nome = nomeIng;
    unidade = unidadeIng;
    quantidade = quantidadeIng;
  }
  //metodo para imprimir os ingredientes
  void printIngrediente(){
    cout << "Nome do ingrediente: " << nome << endl;
    cout << "Quantidade: " << quantidade << unidade << endl;
  }
};

int main() {
  string nomeIngrediente, unidadeIngrediente;
  double qtdIngrediente;
  
  cout << "Digite o nome do ingrediente: ";
  getline(cin, nomeIngrediente);
  
  cout << "Digite a unidade de medida do igrediente: ";
  getline(cin, unidadeIngrediente);
  
  cout << "Digite a medida do ingrediente: ";
  cin >> qtdIngrediente;

  Ingrediente ingrediente1(nomeIngrediente, unidadeIngrediente, qtdIngrediente);
  ingrediente1.printIngrediente();


  return 0;
}