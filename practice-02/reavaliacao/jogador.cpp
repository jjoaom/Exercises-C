#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Jogador{
    private:
    string nome;
    string position;
    int camisa;
    int gols;
    public:
    Jogador(string nome, string position, int camisa, int gols){
        this-> nome = nome;
        this-> position = position;
        this-> camisa = camisa;
        this-> gols =gols;
    }
    string getNome()const{
        return this->nome;
    }
    void setNome(const string& nome){
        this->nome = nome;
    }
    string getPosition() const{
        return this->position;
    }
    void setPosition(const string& position){
        this->position = position;
    }
    int getCamisa() const{
        return this->camisa;
    }
    void setCamisa(const int& camisa){
        try{
            if(camisa > 1 || camisa < 99){
                this->camisa = camisa;
            }else{
                throw (camisa);
            }
        }
        catch(int camisa){
            cerr << "O numero da camisa deve ser maior que 1 e menor que 99. O numero da camisa =" << camisa;
        }

    }
    int getGols() const{
        return this->gols;
    }
    void setGols(const int& gols){
        try{
            if(gols > 0){
                this->gols = gols;
            }else{
                throw(gols);
            }
        }
        catch(int gols){
            cerr << "O numero de gols nao pode ser negativo";
        }
    }
};

class Time{
    public:
    vector<Jogador> jogadores;
    void criarJogador(){
        string nome;
        string posicao;
        int camisa;
        int gols;
        cout << "Insira o nome do jogador:";
        getline(cin,nome);
        cout << "Insira a posição do jogador:";
        getline(cin,posicao);
        cout << "Insira o nº da camisa: ";
        cin >> camisa;
        cout << "Quantos gols o jogador " << nome << "fez?";
        cin >> gols;
        Jogador player(nome,posicao,camisa,gols);
        jogadores.push_back(player);

    }
    void removeJogador(int camisa){

        //auto serve para identificar o tipo usado automaticamente 
        // it é somente o nome escolhido para o tipo auto 
        //nesse laço for, enquanto it for igual ao começo de jogadores e diferente de fim de jogadores, ele incrementa o laço
        for(auto it = jogadores.begin(); it != jogadores.end(); it++){
            //esse if vai analisar se a posição do vetor atual tem o mesmo numero da camisa
            if(it -> getCamisa() == camisa){
                //se for igual ao numero da camisa, apaga o objeto
                jogadores.erase(it);
            }
        }
    }
    void listarJogadores(){
        for(auto it = jogadores.begin(); it != jogadores.end(); it++){
            cout << "Jogador: " << it -> getNome();
            cout << "Posição: " << it -> getPosition();
            cout << "Camisa nº: " << it -> getCamisa();
            cout << "Gols: " << it -> getGols();
            cout << endl;
        }
    }
};

void MontarTime(Time nomeTime){
    int numJogadores;
    cout << "Quantos jogadores o seu time tem?";
    cin >> numJogadores;
    for(int i=0;i<numJogadores,i++){
        nomeTime.criarJogador();
    }
}

void tirarJogador(Time nomeTime){
    int camisa;
    cout << "Qual o numero da camisa do jogador que será removido? ";
    cin >> camisa;
    nomeTime.removeJogador(camisa);
}

int main(){
    Time Atletico;
    Time Cruzeiro;
    MontarTime(Atletico);
    MontarTime(Cruzeiro);
    Atletico.listarJogadores();
    Cruzeiro.listarJogadores();

    tirarJogador(Atletico);
    tirarJogador(Cruzeiro);    

    Atletico.listarJogadores();
    Cruzeiro.listarJogadores();

    return 0;
}







/*
int main(){
    Jogador j1("Ronaldo", "Atacante", 7, 10);
    j1.getPosition();
    j1.getCamisa();
    j1.getGols();
    cout << "Jogador: " << j1.getNome() << " Posicao " << j1.getPosition() << " Camisa nº " << j1.getCamisa() << " qtd de gols: " << j1.getGols() << endl;
    Jogador j2("Pedro","Goleiro",3,0);
    j2.getNome();
    j2.getPosition();
    j2.getCamisa();
    j2.getGols();
    j2.setPosition("Escanteio");
    cout << "Jogador: " << j2.getNome() << " Posicao " << j2.getPosition() << " Camisa nº " << j2.getCamisa() << " qtd de gols: " << j2.getGols() << endl;
    cout << "Nova posicao de" << j2.getNome() << " é " << j2.getPosition();
    return 0;
}*/