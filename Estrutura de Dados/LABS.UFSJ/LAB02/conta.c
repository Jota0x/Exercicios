#include "conta.h"

void criarConta(Conta *c,int numero,char *titular)
{   
    //cria conta 
    c->numero = numero;
    strcpy(c->titular,titular);
    c->saldo = 0; //saldo inicial 0
}

void depositar(Conta *c,double valor)
{       
    c->saldo += valor;

    printf("Valor de %.2lf depositado com sucesso!",valor);
}

void sacar(Conta *c,double valor)
{
    c->saldo -= valor;

    printf("Valor de %.2lf sacado com sucesso!",valor);

}

void consultarSaldo(Conta *c)
{
    printf("Saldo Atual: %.2lf "); //imprime saldo atual
}

void imprimirInfo(Conta *c)
{
    printf("\n === Dados da Conta === \n");
    printf("Titular: %s\n",c->titular);
    printf("Conta: %d\n",c->numero);
    printf("Saldo: %.2lf \n",c->saldo);
}