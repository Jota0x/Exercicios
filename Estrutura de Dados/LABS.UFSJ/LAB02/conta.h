#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{   
    int numero;
    float saldo;
    char titular[100];

}Conta;

//métodos
void criarConta(Conta* c,int numero, char *titular);
void depositar(Conta *c,double valor);
void sacar(Conta *c,double valor);
void consultarSaldo(Conta *c);
void imprimirInfo(Conta *c);
