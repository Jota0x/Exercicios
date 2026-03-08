#include <iostream>
using namespace std;

class Veiculo
{
private:
    string marca;
    int ano;

public:
    Veiculo(string m, int n) : marca(m), ano(n) {};

    // setter
    void setMarca(string m) { marca = m; }
    void setAno(int a) { ano = a; }

    // getters
    string getMarca() { return marca; }
    int getAno() { return ano; }

    // outros metodos
    virtual void info()
    {
        cout << "Carro: " << getMarca() << " Ano: " << getAno() << endl;
    }
};

class Moto : public Veiculo
{
private:
    int cilindradas;

public:
    Moto(string m, int a, int c) : Veiculo(m, a), cilindradas(c) {};

    void setCilindrada(int c) { cilindradas = c; }
    int getCilindrada() { return cilindradas; }

    void info() override
    {
        cout << "Moto: " << getMarca() << " Ano: " << getAno << " Cilindrada: " << getCilindrada();
    }
};

typedef struct
{
    char titulo[50];
    int paginas;
    float preco;

} Livro;

void detalheLivro(Livro l)
{
    printf("Titulo: %s Paginas: %d Preco: %.2f", l.titulo, l.paginas, l.preco);
}

int main()
{
    Livro l;

    scanf("%s%d%f", l.titulo, &l.paginas, &l.preco);

    detalheLivro(l);

    return 0;
}
