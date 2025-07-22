// Faça um programa para ler um número inteiro positivo de três dígitos. Em segui-
// da, calcule e mostre o número formado pelos dígitos invertidos do número lido.
// Exemplo:
// Número lido = 123
// Número gerado = 321
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, nInvertido, centena, dezena, unidade;

    scanf("%d", &n);

    centena = n / 100; // Ex: 123/100 = 1

    dezena = (n % 100) / 10; // resto da divisão por 100 * 10 Ex: 123 % 100 = 23/10 = 2

    unidade = n % 10; //  resto da divisão por 100 Ex: 123 % 10 = 3

    nInvertido = centena + (dezena * 10) + (unidade * 100);

    printf("Numero lido: %d", n); // imprime o numero digitado

    printf("Numero gerado: %d", nInvertido); // imprime valor inverso

    return 0;

} // end main