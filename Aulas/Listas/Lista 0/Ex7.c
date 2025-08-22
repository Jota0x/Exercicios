#include <stdio.h>

int main()
{   
    //declaração das variaveis
    int razao,primeiroTermo,PG;

    scanf("%d%d",&razao,&primeiroTermo);

    //iguava o valor do primeiro termo a PG
    PG = primeiroTermo;

    //calculo da PG
    for(int i = 0; i < 4;i++)
    {
        PG *= razao;
    }//end for 

    //imprime PG
    printf("%d",PG);

    return 0;
}// end main