// Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA –
// mês por extenso e hora:minuto.
#include <stdio.h>
#include <stdlib.h>

// prototipo função
void mesExtenso(int mes);

int main()
{
    int dia, mes, ano, hora, minuto;

    printf("Data: ");
    scanf("%d%d%d", &dia, &mes, &ano);

    printf("Horario: ");
    scanf("%d%d", &hora, &minuto);

    printf("%d/",dia);
    mesExtenso(mes);
    printf("/%d",ano);

    printf("\n Hora: %d:%d",hora,minuto);

        return 0;
} // end main

void mesExtenso(int mes)
{

    char* mesExtenso[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    if (mes < 1 || mes > 12)
    {
        printf("Mes invalido!");
    }
    else

        printf("%s", mesExtenso[mes - 1]);

} // mesExtenso
