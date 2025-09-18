/*
Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo pro-
duto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■■ o número de pessoas que responderam sim;
■■ o número de pessoas que responderam não;
■■ o número de mulheres que responderam sim; e
■■ a percentagem de homens que responderam não, entre todos os homens analisados.
*/
#include <stdio.h>

int main()
{
    char sexo, resposta;
    int sim = 0, nao = 0, mulheres = 0, homens = 0; // contadores

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c %c", &sexo, &resposta);

        // trata resposta
        if (resposta == 'S')
        {
            sim++;
            if (sexo == 'M')
            {
                mulheres++;
            }
        }
        else if (resposta == 'N')
        {
            nao++;
            if (sexo == 'H')
            {
                homens++;
            }
        }

    } // end for

    printf("%d", sim);
    printf("\n%d", nao);
    printf("\n%d", mulheres);
    printf("\n%d%%", (homens / 10) * 100);

    return 0;
} // end main