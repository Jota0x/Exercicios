/*
Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/
#include <stdio.h>

int main()
{
    int n[5], soma = 0;

    // loop leitura dos numeros
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    } // end for

    printf("Os numeros digitados foram: ");
    for (int i = 0; i < 5; i++)
    {
        soma += n[i];

        printf("%d", n[i]);

        if (i < 4)
            printf(" + ");
    }
    printf(" = %d", soma);

    return 0;
} // end main