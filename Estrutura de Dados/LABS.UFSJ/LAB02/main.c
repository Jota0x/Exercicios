#include "conta.h"

int main()
{
    Conta *conta = (Conta*)malloc(sizeof(Conta));
    char titular[] = {"TESTE"};
    int numero = 100;

    criarConta(conta,numero,titular);
    
    imprimirInfo(conta);

    depositar(conta,100);

    imprimirInfo(conta);

    sacar(conta,50);

    imprimirInfo(conta);

    return 0;
}