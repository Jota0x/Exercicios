#include <iostream>
using namespace std;

class Elevador
{
private:
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

public:
    Elevador() {};
    Elevador(int capacidade, int totalAndares)
    {
        this->capacidade = capacidade;
        this->pessoasPresentes = pessoasPresentes;
    }

    // setters
    void setAndares(int totalAndares) { this->totalAndares = totalAndares; }
    void setCapacidade(int capacidade) { this->capacidade = capacidade; }
    void setPessoas(int pessoasPresentes) { this->pessoasPresentes = pessoasPresentes; }

    // getters
    int getAndares() { return totalAndares; }
    int getCapacidade() { return capacidade; }
    int pessoasPresentes() { return pessoasPresentes; }

    // metodos
    void inicializa(int capacidade, int totalAndares)
    {
        this->capacidade = capacidade;
        this->totalAndares = totalAndares;
    }

    void entra(int pessoas, int entrada)
    {
        if (pessoas < capacidade)
            capacidade + pessoas;
        else
            cout << "Maximo!";
    }

    void sair(int pessoas, int sair)
    {
        if (pessoas <= 0)
            cout << "Vazio";
        else
            pessoas - sair;
    }

    void subir(int andar)
    {
        andar = andar + 1;
    }

    void descer(int andar)
    {
        andar = andar - 1;
    }
};
