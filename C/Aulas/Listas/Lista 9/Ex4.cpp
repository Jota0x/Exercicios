#include <iostream>
#include <string>
using namespace std;

class Autor
{
private:
    string nome;

public:
    Autor() {};
    ~Autor() {};
    void setNome(string nome) { this->nome = nome; }
    string getNome() { return nome; }
};

class Livro
{
private:
    string titulo;
    int anoPublicacao;
    Autor *autor;

public:
    Livro() {}
    ~Livro() {}

    // setters
    void setAno(int ano) { this->anoPublicacao = ano; }
    void setTitulo(string titulo) { this->titulo = titulo; }
    void setAutor(Autor *autor) { this->autor = autor; }

    // getters
    int getAno() { return anoPublicacao; }
    string getTitulo() { return titulo; }
    Autor *getAutor() { return autor; }
};

int main()
{
    Livro *l = new Livro();
    Autor *a = new Autor();

    string nome;
    int ano;

    // nome do autor
    getline(cin, nome);
    a->setNome(nome);
    l->setAutor(a);

    // nome do livro
    getline(cin, nome);

    l->setTitulo(nome);

    cin >> ano;

    l->setAno(ano);

    cout << "Titulo:" << l->getTitulo() << " Ano: " << l->getAno() << " Autor: " << l->getAutor()->getNome();

    delete a;
    delete l;

    return 0;
} // end main