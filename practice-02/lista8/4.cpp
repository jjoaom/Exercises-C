#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Produto {
private:
    string name;
    double price;
public:
    Produto(string nomeProd, double precoProd) : name(nomeProd), price(precoProd) {}

    void printProduto() {
        cout << "Nome do produto: " << name << endl;
        cout << "Preço: R$" << price << endl;
    }

    virtual void descricao() {
        cout << "Esse é um produto de nome " << name << " e custa R$" << price << endl;
    }

    virtual ~Produto() {} // Destrutor virtual para garantir a destruição correta dos objetos derivados
};

class Alimento : public Produto {
private:
    double peso;
public:
    Alimento(string nomeProd, double precoProd, double pesoComida) : Produto(nomeProd, precoProd), peso(pesoComida) {}

    void descricao() override {
        cout << "Este é um alimento com peso de " << peso << " kg." << endl;
    }

    void printFood() {
        printProduto();
        cout << "Peso em kg: " << peso << endl;
    }
};

class Bebida : public Produto {
private:
    double volume;
public:
    Bebida(string nomeProd, double precoProd, double volumeBebida) : Produto(nomeProd, precoProd), volume(volumeBebida) {}

    void descricao() override {
        cout << "Esta é uma bebida com volume de " << volume << " litros." << endl;
    }

    void printDrink() {
        printProduto();
        cout << "Volume: " << volume << endl;
    }
};

void exibirDescricao(Produto* produto) {
    produto->descricao();
}

int main() {
    Alimento macarrao("Macarrão", 15.5, 10.0);
    Bebida agua("Água", 2.5, 2.0);

    vector<Produto*> produtos;
    produtos.push_back(&macarrao);
    produtos.push_back(&agua);

    for (Produto* produto : produtos) {
        exibirDescricao(produto);
    }

    return 0;
}
