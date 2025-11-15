#include <iostream>
using namespace std;

class Carro
{

private:
    string placa;
    int ano;

public:
    Carro() : placa(""), ano(0) {}

    Carro(string p, int a)
    {
        placa = p;
        ano = a;
    }

    // metodos setter
    void setPlaca(string placa) { this->placa = placa; }
    void setAno(int ano) { this->ano = ano; }

    // metodos getter
    string getPlaca() { return placa; }
    int getAno() { return ano; }

    // outros métodos
    float calculoImposto(int ano, int anoAtual);
    float somaImposto(float imposto);
    int naoPagam(int ano, int anoAtual, int qtCarro);
};

float Carro::calculoImposto(int ano, int anoAtual)
{
    float imposto;
    int idade = anoAtual - ano;

    if (idade < 0)
        imposto = 0;
    if (idade >= 9)
        imposto = 0;
    if (idade >= 4)
        imposto = 100;
    else
        imposto = 500 - (idade * 100);

    return imposto;
}

// somaImposto
float Carro::somaImposto(float imposto)
{
    float soma = 0;

    soma += imposto;

    return imposto;
} // end soma imposto

int Carro::naoPagam(int ano, int anoAtual, int qtCarro)
{
    int aux = 0;

    for (int i = 0; i < qtCarro; i++)
        if (anoAtual - ano >= 10)
            aux++;

    return aux;
}

int main()
{
    int anoAtual;

    cin >> anoAtual;

    

    return 0;
} // end main