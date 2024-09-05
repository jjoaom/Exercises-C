/*Encapsulamento e Polimorfismo
5) Crie uma classe Receita que contenha uma lista de Ingrediente. Implemente métodos para
adicionar um ingrediente à receita, remover um ingrediente da receita e listar todos os
ingredientes da receita. Em seguida, crie uma classe derivada ReceitaEspecial que
adicione um método para calcular o custo total da receita com base nos preços dos
ingredientes. Teste a classe ReceitaEspecial criando uma receita, adicionando ingredientes
e calculando o custo total.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Ingrediente {
private:
    string nome;
    double preco;
public:
    Ingrediente(string nome, double preco) : nome(nome), preco(preco) {}

    string getNome() const {
        return nome;
    }

    double getPreco() const {
        return preco;
    }
};

class Receita {
protected:
    vector<Ingrediente> ingredientes;
public:
    void adicionarIngrediente(const Ingrediente& ingrediente) {
        ingredientes.push_back(ingrediente);
    }

    void removerIngrediente(const string& nomeIngrediente) {
        for (size_t i = 0; i < ingredientes.size(); ++i) {
            if (ingredientes[i].getNome() == nomeIngrediente) {
                ingredientes.erase(ingredientes.begin() + i);
                break;
            }
        }
    }

    void listarIngredientes() const {
        for (size_t i = 0; i < ingredientes.size(); ++i) {
            cout << "Nome: " << ingredientes[i].getNome() << ", Preço: R$" << ingredientes[i].getPreco() << endl;
        }
    }
};

class ReceitaEspecial : public Receita {
public:
    double calcularCustoTotal() const {
        double custoTotal = 0.0;
        for (size_t i = 0; i < ingredientes.size(); ++i) {
            custoTotal += ingredientes[i].getPreco();
        }
        return custoTotal;
    }
};

int main() {
    ReceitaEspecial minhaReceita;

    Ingrediente tomate("Tomate", 3.5);
    Ingrediente queijo("Queijo", 5.0);
    Ingrediente massa("Massa", 2.0);

    minhaReceita.adicionarIngrediente(tomate);
    minhaReceita.adicionarIngrediente(queijo);
    minhaReceita.adicionarIngrediente(massa);

    cout << "Ingredientes da receita:" << endl;
    minhaReceita.listarIngredientes();

    cout << "Custo total da receita: R$" << minhaReceita.calcularCustoTotal() << endl;

    minhaReceita.removerIngrediente("Queijo");

    cout << "Ingredientes da receita após remoção do queijo:" << endl;
    minhaReceita.listarIngredientes();

    cout << "Custo total da receita após remoção do queijo: R$" << minhaReceita.calcularCustoTotal() << endl;

    return 0;
}

