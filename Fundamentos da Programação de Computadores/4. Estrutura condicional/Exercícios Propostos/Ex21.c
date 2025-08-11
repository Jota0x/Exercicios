// Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
// A procedência obedece à tabela a seguir.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    int codigo;

    scanf("%d%f", &codigo, &preco);

    if (codigo == 1)
    {
        printf("Sul");
    } // end if
    else if (codigo == 2)
    {
        printf("Norte");
    } // end else if
    else if (codigo == 3)
    {
        printf("Leste");
    } // end else if
    else if (codigo == 4)
    {
        printf("Oeste");
    } // end else if
    else if (codigo == 5 || codigo == 6)
    {
        printf("Nordeste");
    } // end else if
    else if (codigo == 7 || codigo == 8 || codigo == 9)
    {
        printf("Sudeste");
    } // end else if
    else if (codigo >= 10 && codigo <= 20)
    {
        printf("Centro-Oeste");
    } // end else if
    else
        printf("Nordeste");

    return 0;
} // end main