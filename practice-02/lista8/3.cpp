/*3) Herança Básica - Crie uma classe base chamada Produto com os atributos nome (do tipo
string) e preco (do tipo double). Implemente métodos públicos para definir e obter os
valores de nome e preco, e um método para imprimir as informações do produto.
Em seguida, crie duas classes derivadas: Bebida e Alimento, que herdam de Produto. A classe
Bebida deve ter um atributo adicional volume (do tipo double) e a classe Alimento deve
ter um atributo adicional peso (do tipo double). Implemente métodos para definir e obter
os valores de volume e peso nas respectivas classes derivadas. Crie objetos das classes
Bebida e Alimento, defina os valores dos atributos e imprima-os.
Pontifícia Universidade Católica de Minas Gerais
Instituto de Ciências Exatas e Informática (ICEI)
Engenharia de Computação / Engenharia de Software
Disciplina: Algoritmos e Estruturas de Dados I
*/

#include <iostream>
#include <string>

using namespace std;


class Produto{
    private:
    string name;
    double price;
    public:
    Produto(string nomeProd, double precoProd){
        name = nomeProd;
        price = precoProd; 
    }
    void printProd(){
        cout << "Nome do ingrediente: " << name << endl;
        cout << "Preço: " << "R$" << price << endl;
    }
};

class Alimento : Produto{
    private:
    double peso;
    public:
    Produto(string nomeProd, double precoProd) : Alimento(double pesoAlimento){
        name = nomeProd;
        price = precoProd;
        peso = pesoAlimento;
    }
    void printFood(){
        cout << "Nome do prato: " << name << endl;
        cout << "Preço: " << "R$" << price << endl;
        cout << "Peso do prato" << peso << "Kg" << endl;
    }
};
class Bebida : Produto{
    private:
    double volume;
    public:
    Bebida(string nomeProd, double precoProd, double volumeBebida){
        name = nomeProd;
        price = precoProd;
        volume = volumeBebida;
    }
    void printDrink(){
        cout << "Nome da bebida: " << name << endl;
        cout << "Preço: " << "R$" << price << endl;
        cout << "Volume da bebida" << volume << "ml" << endl;
    }
};



int main() {
  string nomeComida, unidadeIngrediente;
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