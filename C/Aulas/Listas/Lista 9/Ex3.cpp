#include <iostream>
using namespace std;

class Carro
{
private:
    int capacidade;
    int consumo;
    int atual;
    int distancia;

public:
    Carro() {};
    Carro(int capacidade, int consumo, int atual, int distancia)
        : capacidade(capacidade), consumo(consumo), atual(atual), distancia(distancia) {}

    // set
    void setCarro(int capacidade, int consumo, int atual, int distancia)
    {
        this->capacidade = capacidade;
        this->consumo = consumo;
        this->atual = atual;
        this->distancia = distancia;
    }

    // getters
    int getCapacidade() { return this->capacidade; }
    int getConsumo() { return this->consumo; }
    int getAtual() { return this->atual; }
    int getDistancia() { return this->distancia; }

    // outros metodos
    void abastecer(int combustivel)
    {
        atual += combustivel;
    }

    int retante(int atual)
    {
        atual = atual
    }

};

int main()
{
    Carro c1(50, 15, 0, 0);
    Carro c2(50, 15, 0, 0);

    int comb1, comb2, d1, d2;

    cin >> comb1;
    cin >> comb2;

    cin >> d1;
    cin >> d2;

    c1.setCarro(50, 15, comb1, d1);
    c1.setCarro(50, 15, comb2, d2);



} // end main