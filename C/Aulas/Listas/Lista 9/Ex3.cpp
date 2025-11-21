#include <iostream>
using namespace std;

class Carro
{
private:
    int capacidade;
    int consumo;
    int quantidadeAtual;
    int distanciaPercorrida;

public:
    Carro()
    {
        this->distanciaPercorrida = 0;
        this->quantidadeAtual = 0;
        this->capacidade = 0;
        this->consumo = 0;
    }

    // setters
    void setCapacidade(int capacidade) { this->capacidade = capacidade; }
    void setConsumo(int consumo) { this->consumo = consumo; }
    void setQuantidadeAtual(int quantidadeAtual) { this->quantidadeAtual = quantidadeAtual; }
    void setDistanciaPercorrida(int distanciaPercorrida) { this->distanciaPercorrida = distanciaPercorrida; }

    // getters
    int getCapacidade() { return capacidade; }
    int getConsumo() { return consumo; }
    int getQuantidadeAtual() { return quantidadeAtual; }
    int getDistanciaPercorrida() { return distanciaPercorrida; }

    // outros métodos
    void abastecer(int quantidadeAbastecida)
    {
        quantidadeAtual += quantidadeAbastecida;
        if (quantidadeAtual > capacidade)
            quantidadeAtual = capacidade;
    }

    void moverCarro(int distancia)
    {
        int distanciaPossivel = quantidadeAtual * consumo;

        int distanciaReal = 0;

        if (distancia <= distanciaPossivel)
            distanciaReal = distancia;
        else
            distanciaReal = distanciaPossivel;

        int combustivelGasto = distanciaReal / consumo;

        distanciaPercorrida += distanciaReal;
        quantidadeAtual -= combustivelGasto;
    }
};

int main()
{
    int dist1, dist2;
    int comb1, comb2;

    cin >> comb1;
    cin >> comb2;
    cin >> dist1;
    cin >> dist2;

    Carro c1;
    Carro c2;

    c1.setConsumo(15);
    c1.setCapacidade(50);
    c2.setConsumo(15);
    c2.setCapacidade(50);

    c1.abastecer(comb1);
    c2.abastecer(comb2);

    c1.moverCarro(dist1);
    c2.moverCarro(dist2);

    cout << "Carro 1 - Distancia total: " << c1.getDistanciaPercorrida() << " km" << endl;
    cout << "Carro 1 - Combustivel restante: " << c1.getQuantidadeAtual() << " litros" << endl;
    cout << "Carro 2 - Distancia total: " << c2.getDistanciaPercorrida() << " km" << endl;
    cout << "Carro 2 - Combustivel restante: " << c2.getQuantidadeAtual() << " litros" << endl;

    return 0;
} // end main