#include <iostream>
using namespace std;

class Elevador
{
private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

public:
    Elevador() = default;

    Elevador(int cap, int total) : andarAtual(0), totalAndares(total), capacidade(cap), pessoasPresentes(0) {}

    // getters
    int getAndarAtual() { return andarAtual; }
    int getTotalAndares() { return totalAndares; }
    int getCapacidade() { return capacidade; }
    int getPessoasPresentes() { return pessoasPresentes; }

    void inicializa(int cap, int total)
    {
        capacidade = cap;
        totalAndares = total;
        andarAtual = 0;
        pessoasPresentes = 0;
    }

    void entra()
    {
        if (pessoasPresentes < capacidade)
            pessoasPresentes++;

        else
            cout << ">> Elevador cheio! Ninguem entra." << endl;
    }

    void sai()
    {
        if (pessoasPresentes > 0)
            pessoasPresentes--;

        else
            cout << ">> vazio!" << endl;
    }

    void sobe()
    {
        if (andarAtual < totalAndares)
            andarAtual++;

        else
            cout << ">> ultimo andar!" << endl;
    }

    void desce()
    {
        if (andarAtual > 0)
            andarAtual--;

        else
            cout << ">> terreo!" << endl;
    }
};

int main()
{
    int capacidade, totalAndares, numAcoes;
    string comando;

    cin >> capacidade >> totalAndares;

    Elevador e1(capacidade, totalAndares);
    Elevador e2(capacidade, totalAndares);

    cin >> numAcoes;

    // loop principal, movimento do elevandor
    for (int i = 0; i < numAcoes; i++)
    {
        cin >> comando;

        if (comando == "entrar")
            e1.entra();

        else if (comando == "sair")
            e1.sai();

        else if (comando == "subir")
            e1.sobe();

        else if (comando == "desce" || comando == "descer")
            e1.desce();

        cout << "Andar atual: " << e1.getAndarAtual() << endl;
        cout << "Pessoas presentes: " << e1.getPessoasPresentes() << endl;
    }

    return 0;
}