/*3) Herança Básica - Crie uma classe base chamada Produto com os atributos nome (do tipo
string) e preco (do tipo double). 

Implemente métodos públicos para definir e obter os
valores de nome e preco, e um método para imprimir as informações do produto.
Em seguida, crie duas classes derivadas: Bebida e Alimento, que herdam de Produto. A classe
Bebida deve ter um atributo adicional volume (do tipo double) e a classe Alimento deve
ter um atributo adicional peso (do tipo double). 

Implemente métodos para definir e obter
os valores de volume e peso nas respectivas classes derivadas. Crie objetos das classes
Bebida e Alimento, defina os valores dos atributos e imprima-os.

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
    void printProduto(){
        cout << "Nome do ingrediente: " << name << endl;
        cout << "Preço: " << "R$" << price << endl;
    }
};

class Alimento : Produto{
    private:
    double peso;
    public:
    Alimento(string nomeProd, double precoProd, double pesoComida) : Produto(nomeProd,precoProd){
        peso = pesoComida;
    }
    void printFood(){
        printProduto();
        cout << "Peso em kg: " << peso << endl;
    }

};

class Bebida : Produto{
    private:
    double volume;
    public:
    Bebida(string nomeProd, double precoProd, double volumeBebida) : Produto(nomeProd,precoProd){
        volume = volumeBebida;
    }
    void printDrink(){
        printProduto();
        cout << "Volume: " << volume << endl;
    }
};



int main() {
  Alimento macarrao("macarrão", 15.5, 10.0);
  Bebida agua("água", 2.5, 2.0);
  macarrao.printFood();
  agua.printDrink();
  return 0;
}