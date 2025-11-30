#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;

public:
    // setters
    void setNome(string nome) { this->nome = nome; }
    void setIdade(int idade) { this->idade = idade; }

    // getters
    string getNome() { return this->nome; }
    int getIdade() { return this->idade; }

    // outros metodos
    int idadeMeses(int idade) { return idade * 12; }
    int idade2050(int idade)
    {
        int anoAtual = 2025;
        return idade + (2050 - anoAtual);
    }
};

main()
{
    Pessoa *pessoa = new Pessoa;

    pessoa->setNome("Joao Pedro");
    pessoa->setIdade(20);

    cout << "Idade em meses: " << pessoa->idadeMeses(20) << "\n";
    cout << "Idade em 2050: " << pessoa->idade2050(20) << "\n";

    delete pessoa;

    return 0;
}