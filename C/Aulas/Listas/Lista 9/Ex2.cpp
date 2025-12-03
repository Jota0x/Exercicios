#include <iostream>
using namespace std;

class Relogio
{
private:
    int segundos;
    int minutos;
    int horas;

public:
    // setters
    void setSegundos(int segundos) { this->segundos = segundos; }
    void setMinutos(int minutos) { this->minutos = minutos; }
    void setHoras(int horas) { this->horas = horas; }

    // getters
    int getSegundos() { return this->segundos; }
    int getMinutos() { return this->minutos; }
    int getHoras() { return this->horas; }

    // outros métodos
    void definirHorario()
    {
        cout << "Horas:";
        cin >> horas;
        cout << "Minutos: ";
        cin >> minutos;
        cout << "Segundos";
        cin >> segundos;
    }

    void avancar1seg()
    {
        if (segundos > 59)
        {
            segundos = 0;
            minutos++;
        }
        if (minutos > 59)
        {
            minutos = 0;
            horas++;
        }
        if (horas > 23)
        {
            horas = 0;
        }
    }

    void imprimirHorario()
    {
        cout << horas << ":" << minutos << ":" << segundos;
    }
};

int main()
{
    int N;

    cin >> N;

    Relogio relogio;
    int h, m, s;

    for (int i = 0; i < N; i++)
    {
        cin >> h >> m >> s;

        relogio.setHoras(h);
        relogio.setMinutos(m);
        relogio.setSegundos(s);

        relogio.avancar1seg();

        relogio.imprimirHorario();
    }

    return 0;
} // end main