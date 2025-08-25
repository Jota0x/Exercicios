// Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int Numero1, Numero2, Numero3, Numero4, soma = 0; // soma = 0 para n guardar lixo

    scanf("%d %d %d %d", &Numero1, &Numero2, &Numero3, &Numero4);

    soma = Numero1 + Numero2 + Numero3 + Numero4;

    printf("%d", soma);

    return 0;

} // end main