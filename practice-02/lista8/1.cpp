/*Classe Básica -
Crie uma classe chamada Ingrediente com os atributos privados nome
(do tipo string), quantidade (do tipo double) e unidade (do tipo string,
representando unidades como kg, litros, unidades). Implemente métodos públicos
para definir e obter os valores de nome, quantidade e unidade, além de um método
para imprimir as informações do ingrediente. Em seguida, crie um objeto da
classe Ingrediente, defina os valores dos atributos e imprima-os.*/

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
  
  cout << "Digite a unidade de medida do ingrediente: ";
  getline(cin, unidadeIngrediente);
  
  cout << "Digite a medida do ingrediente: ";
  cin >> qtdIngrediente;

  Ingrediente ingrediente1(nomeIngrediente, unidadeIngrediente, qtdIngrediente);
  ingrediente1.printIngrediente();


  return 0;
}