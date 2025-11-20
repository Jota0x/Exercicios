#include <iostream>
using namespace std;

class Relogio
{
private:
    int horas;
    int minutos;
    int segundos;

public:
    Relogio() {}

    // setters
    void setHoras(int horas) { this->horas = horas; }
    void setMinutos(int minutos) { this->minutos = minutos; }
    void setSegundos(int segundos) { this->segundos = segundos; }

    // getters
    int getHoras() { return horas; }
    int getMinutos() { return minutos; }
    int setsegundos() { return segundos; }

    // outros metodos
    void avancar1Segundo()
    {
        segundos++;

        if (segundos >= 60)
        {
            segundos = 0;
            minutos++;
        }
        if (minutos >= 60)
        {
            minutos = 0;
            horas++;
        }
        if (horas >= 24)
        {
            horas = 0;
        }
    }

    void imprimir()
    {
        cout << horas << ":" << minutos << ":" << segundos << endl;
    }
};

int main()
{
    int n;
    int horas, minutos, segundos;

    cin >> n;

    Relogio relogio;

    for (int i = 0; i < n; i++)
    {
        cin >> horas >> minutos >> segundos;

        relogio.setHoras(horas);
        relogio.setMinutos(minutos);
        relogio.setSegundos(segundos);
        relogio.avancar1Segundo();
        relogio.imprimir();
    }
}