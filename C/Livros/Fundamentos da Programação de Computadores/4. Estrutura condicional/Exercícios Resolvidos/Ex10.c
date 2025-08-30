// Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
// usuário. cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o
// segundo, o mês e o terceiro, o ano
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Primeira data: ");
    scanf("%d%d%d", &dia1, &mes2, &ano1);

    printf("\nSegunda Data: ");
    scanf("%d%d%d", &dia2, &mes2, &ano2);

    // analise do ano
    if (ano1 > ano2)
    {
        printf("A primeira  data é maior");
    }
    else if (ano2 > ano1)
    {
        printf("A segunda data é maior");
    } // end else if
    else if (mes1 > mes2)
    {
        printf("A primeira  data é maior");
    } // end else if
    else if (mes2 > mes1)
    {
        printf("A segunda  data é maior");
    } // end else if
    else if (dia1 > dia2)
    {
        printf("A primeira  data é maior");
    } // end else if
    else
        printf("A segunda  data é maior");

    return 0;
} // end main