#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    float altura;

public:
    Pessoa() {};

    // setters
    void setNome(string nome) { this->nome = nome; }
    void setIdade(int idade) { this->idade = idade; }
    void setAltura(float altura) { this->altura = altura; }

    // getters
    string getNome() { return nome; }
    int getIdade() { return idade; }
    float getAltura() { return altura; }
};

int main()
{
    int n;
    string nome;
    int idade;
    float altura;

    cin >> n;

    cin.ignore();

    Pessoa pessoa[n];

    // le dados pessoa
    for (int i = 0; i < n; i++)
    {
        getline(cin, nome);
        cin >> idade;
        cin >> altura;

        pessoa[i].setNome(nome);
        pessoa[i].setIdade(idade);
        pessoa[i].setAltura(altura);
    }

    // imprime dados pessoa
    for (int i = 0; i < n; i++)
    {

        cout << "Nome:" << pessoa[i].getNome() << endl;
        cout << "Idade:" << pessoa[i].getIdade() << endl;
        cout << "Altura: " << pessoa[i].getAltura() << endl;
    }
}