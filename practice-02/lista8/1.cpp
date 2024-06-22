/*Classe Básica - 
Crie uma classe chamada Ingrediente com os atributos privados nome
(do tipo string), quantidade (do tipo double) e unidade (do tipo string, representando
unidades como kg, litros, unidades). 
Implemente métodos públicos para definir e obter os
valores de nome, quantidade e unidade, além de um método para imprimir as informações
do ingrediente. 
Em seguida, crie um objeto da classe Ingrediente, defina os valores dos
atributos e imprima-os.*/

#include <iostream>
#include <string>

class Ingrediente{
    private:
    std::string nome;
    double quantidade;
    std::string unidade;
    public:
    Ingrediente(std::string nome, double qtd, std::string un){
        nome = nome;
        quantidade = qtd;
        unidade = un;
    }
        std::string pegarNome(std::string nome){
            std::cout << "Digite o nome do ingrediente: ";
            std::cin.ignore();
            getline(cin, nome);
            return nome;
        }
}