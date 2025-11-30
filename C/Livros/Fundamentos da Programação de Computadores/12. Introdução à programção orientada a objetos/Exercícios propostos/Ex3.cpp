#include <iostream>
using namespace std;

class Produto
{
private:
    int numero;
    float preco;

public:
    Produto() {};

    // setters
    void setNumero(int numero) { this->numero = numero; }
    void setPreco(float preco) { this->preco = preco; }

    // getters
    int getNumero() { return this->numero; }
    float getPreco() { return this->preco; }

    // outros metodos
    float desconto(float preco)
    {
        float desconto;

        if (preco > 100)
            desconto = 0.15f;
        else
            desconto = 0.05f;

        return preco * desconto;
    }
};

class Cliente
{
private:
    int numero;
    string nome;
    char sexo;

public:
    Cliente() {};

    // setters
    void setNumero(int numero) { this->numero = numero; }
    void setNome(string nome) { this->nome = nome; }
    void setSexo(char sexo) { this->sexo = sexo; }

    // getters
    int getNumero() { return this->numero; }
    string getNome() { return this->nome; }
    char getSexo() { return this->sexo; }

    // outros metodos
    float descontoAdicional(char sexo)
    {
        float desconto = 1;
        if (sexo == 'F')
            desconto = 0.05f;
    }
};

class Compra
{
private:
    int produto;
    int cliente;
    int quantidade;
    float valorTotal;

public:
    // setters
    void serProduto(int produto) { this->produto = produto; }
    void setCliente(int cliente) { this->cliente = cliente; }
    void getQuantidade(int quantidade) { this->quantidade = quantidade; }
    void getValor(int valorTotal) { this->valorTotal = valorTotal; }

    // gettes
    int getProduto() { return this->produto; }
    int getCliente() { return this->cliente; }
    int getQuantidade() { return this->quantidade; }
    float getValor() { return this->valorTotal; }

    // outros metodos
    float valorTotal(float valor, int quantidade)
    {
        return valor * quantidade;
    }

    

};

int main()
{

} // end main