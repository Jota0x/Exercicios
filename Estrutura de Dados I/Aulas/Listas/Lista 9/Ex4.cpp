#include <iostream>
using namespace std;

class Autor
{
private:
    string nome;

public:
    Autor() = default;
    Autor(string n) : nome(n) {}

    void setNome(string n) { nome = n; }
    string getNome() { return nome; }
};

class Livro
{
private:
    string titulo;
    int anoPulicacao;
    Autor *autor;

public:
    Livro() = default;
    Livro(string t, int a, Autor *aut) : titulo(t), anoPulicacao(a), autor(aut) {}

    void setTitulo(string t) { titulo = t; }
    string getTitulo() { return titulo; }

    void setAno(int a) { anoPulicacao = a; }
    int getAno() { return anoPulicacao; }

    void setAutor(Autor *aut) { autor = aut; }
    string getAutor() { return autor->getNome(); }
};

int main()
{

    string titulo, autor;
    int anoPublicacao;

    getline(cin, autor);
    getline(cin, titulo);
    cin >> anoPublicacao;

    Autor a1(autor);
    Livro l1(titulo, anoPublicacao, &a1);

    cout << "detalhe do livro: ";
    cout << "Titulo: " << l1.getTitulo() << endl;
    cout << "Ano de Publicacao: " << l1.getAno() << endl;
    cout << "Autor: " << l1.getAutor() << endl;

    return 0;

} // end main