#include <stdio.h>

int main()
{
    //declaração variaveis
    int hora,minuto,minutoTotal;

    //le hora e minuto
    scanf("%d%d",&hora,&minuto);

    //calculo minutos totais
    minutoTotal = ( hora * 60) + minuto;

    //imprime minuto total
    printf("%d",minutoTotal);

    return 0;
}// end main