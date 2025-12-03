#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    float altura;

public:
    // construtor padrao
    Pessoa() {};

    // setters
    void setNome(string nome) { this->nome = nome; }
    void setIdade(int idade) { this->idade = idade; }
    void setAltura(float altura) { this->altura = altura; }

    // getters
    string getNome() { return this->nome; }
    int getIdade() { return this->idade; }
    float getAltura() { return this->altura; }
};

int main()
{
    int N;

    // le quantidade de pessoas
    cin >> N;

    Pessoa pessoa[N];
    int idade;
    string nome;
    float altura;

    cin.ignore();

    for (int i = 0; i < N; i++)
    {

        // le dados de pessoa
        getline(cin, nome);
        cin.ignore();

        cin >> idade;
        cin >> altura;

        pessoa[i].setNome(nome);
        pessoa[i].setIdade(idade);
        pessoa[i].setAltura(altura);
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Dados da pessoa: \n";
        cout << "Nome: " << pessoa[i].getNome() << "\n";
        cout << "Idade: " << pessoa[i].getIdade() << "\n";
        cout << "Altura: " << pessoa[i].getAltura() << "\n";
    }

    return 0;

} // end main