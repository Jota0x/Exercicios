#include <iostream>
using namespace std;

class Carro
{
private:
    float capacidade;
    float consumo;
    float combustivelAtual;
    float distanciaPercorrida;

public:
    Carro(float combustivelInicial) : capacidade(50), consumo(15), combustivelAtual(0), distanciaPercorrida(0)
    {
        if (combustivelInicial > capacidade)
            combustivelAtual = capacidade;

        else
            combustivelAtual = combustivelInicial;
    }

    void abastecer(float quantidade)
    {
        if (combustivelAtual + quantidade > capacidade)
            combustivelAtual = capacidade;

        else
            combustivelAtual += quantidade;
    }

    void mover(float distancia)
    {
        float litrosNecessarios = distancia / consumo;

        if (combustivelAtual >= litrosNecessarios)
        {
            combustivelAtual -= litrosNecessarios;
            distanciaPercorrida += distancia;
        }
        else
        {
            float distanciaPossivel = combustivelAtual * consumo;

            distanciaPercorrida += distanciaPossivel;
            combustivelAtual = 0.0;
        }
    }

    float getCombustivel() { return combustivelAtual; }
    float getDistancia() { return distanciaPercorrida; }
};

int main()
{

    float comb1, comb2;
    float dist1, dist2;

    cin >> comb1 >> comb2 >> dist1 >> dist2;

    Carro carro1(comb1);
    Carro carro2(comb2);

    carro1.mover(dist1);
    carro2.mover(dist2);

    cout << "Carro 1  Distancia: " << carro1.getDistancia() << " km | Combustivel: " << carro1.getCombustivel() << " litros" << endl;
    cout << "Carro 2  Distancia: " << carro2.getDistancia() << " km | Combustivel: " << carro2.getCombustivel() << " litros" << endl;

    return 0;
}