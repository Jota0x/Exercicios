/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■
 ■ a quantidade de pessoas com idade superior a 50 anos;
■
 ■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■
 ■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
 */
#include <stdio.h>

int main()
{
    int idade, maior50 = 0, entre10e20 = 0;
    float altura, peso, mediaAltura = 0, menos40 = 0;

    // loop principal
    for (int i = 0; i < 0; i++)
    {
        // le altura e peso
        scanf("%d%f%f", &idade, &altura, &peso);

        // trata idade
        if (idade > 50)
        {
            maior50++;
        } // end if

        // trata altura
        if (idade >= 10 && idade <= 20)
        {
            mediaAltura += altura;
            entre10e20++;
        } // end if

        // trata peso
        if (peso > 40)
        {
            menos40++;
        } // end if

    } // end for

    // imprime informações
    printf("\nIdade superior a 50: %d", maior50);
    printf("\nMeida altura: %f", mediaAltura);
    printf("\nInferior a 40Kg: %f%%", (menos40 / 8) * 100);

    return 0;
} // end main