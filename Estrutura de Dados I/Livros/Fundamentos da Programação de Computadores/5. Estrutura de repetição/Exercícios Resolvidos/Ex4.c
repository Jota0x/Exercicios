// Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
// Foram obtidos os seguintes dados:
// a) código da cidade;
// b) número de veículos de passeio;
// c) número de acidentes de trânsito com vítimas.
// Deseja-se saber:
// a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
// b) qual é a média de veículos nas cinco cidades juntas;
// c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
#include <stdio.h>

int main()
{
    int codigoCidade, numeroVeiculo, numeroAcidente;
    int maiorIndice, menorIndice, acidente, contador, totalVeiculos, cidadeMenor, cidadeMaior;
    float mediaVeiculos = 0, mediaAcidentes = 0;

    // le a primeira vez fora do loop para igualar ao menor/maior indice
    scanf("%d%d%d", &codigoCidade, &numeroVeiculo, &numeroAcidente);

    // valores igualados
    maiorIndice = numeroAcidente;
    menorIndice = numeroAcidente;

    // le codigoCidade numeroVeiculo numeroAcidente
    for (int i = 0; i < 4; i++)
    {
        scanf("%d%d%d", &codigoCidade, &numeroVeiculo, &numeroAcidente);
        if (numeroVeiculo < 2000)
        {
            // contabiliza quantidade de cidades que ocorreram acidentes
            contador++;
            // total de acidentes
            acidente += numeroAcidente;

        } // end if
        // verifica valores maiores que o Indice atual
        if (numeroAcidente > maiorIndice)
        {
            maiorIndice = numeroAcidente;
            // grava codigo da cidade
            cidadeMaior = codigoCidade;
        } // end if
        // verifica valores menores que o indice atual
        else if (numeroAcidente < menorIndice)
        {
            menorIndice = numeroAcidente;
            // grava codigo cidade
            cidadeMenor = codigoCidade;
        } // end else if

        // total de veiculos
        totalVeiculos += numeroVeiculo;

    } // end for

    // calculo da media de acidentes
    mediaAcidentes = acidente / contador;

    printf("Maior Indice: %d Cidade: %d| Menor Indice: %d Cidade: %d", maiorIndice, cidadeMaior, menorIndice, cidadeMenor);
    printf("\nMedia total de veiculos: %f", mediaVeiculos);
    printf("\nMedia acidentes de transito: %f", mediaAcidentes);

    return 0;
} // end main