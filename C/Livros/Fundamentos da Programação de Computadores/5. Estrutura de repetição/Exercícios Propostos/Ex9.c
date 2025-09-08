/*
Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
■■ a média das idades das dez pessoas;
■■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
■■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m.
*/
#include <stdio.h>

int main()
{
    int idade, contadorPesoAltura = 0, contadorIdade = 0;
    float peso, altura, mediaIdade = 0;

    for (int i = 0; i < 10; i++)
    {
        // le idade altura e peso
        scanf("%d%f%f");

        mediaIdade += idade;

        // condicional
        if (peso > 90 && altura < 150)
        {
            contadorPesoAltura++;
        } // end if
        if (idade >= 10 && idade <= 30)
        {
            contadorIdade++;
        } // end if

    } // end for

    // calculo média
    mediaIdade = mediaIdade / 10;

    // imprime informações
    printf("Media: %f", mediaIdade);
    printf("\nPessoas peso 90: %d", contadorPesoAltura);
    printf("\nPorcentagem: %d%%", (contadorIdade / 10) * 100);

    return 0;
} // end main