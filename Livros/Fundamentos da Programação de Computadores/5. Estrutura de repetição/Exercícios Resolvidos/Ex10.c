// Em um campeonato de futebol existem cinco times e cada um possui onze jogadores. Faça um progra-
// ma que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
// ■■ a quantidade de jogadores com idade inferior a 18 anos;
// ■■ a média das idades dos jogadores de cada time;
// ■■ a média das alturas de todos os jogadores do campeonato;
//Questão modificada, fiz media de todos os jogadores do campeonato 
#include <stdio.h>

int main()
{
    float peso, altura, mediaIdade, mediaAltura;
    int idade, contador = 0,somaIdade,somaAltura;
    // loop principal
    for (int i = 0; i < 55; i++)
    {
        scanf("%d%f%f", &idade, &peso, &altura);

        // contabiliza menores de 18
        if (idade < 18)
        {
            contador++;
        } // end if

        somaIdade += idade;

        somaAltura += altura;   

    } // end for

    mediaAltura = somaAltura/55;

    mediaIdade = somaAltura/55;

    printf("Pessoas com menos de 18: %d | Media das idades: %f | Media das alturas: %f |",contador,mediaAltura,mediaIdade);
    return 0;
} // end main