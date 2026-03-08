#include <stdio.h>

int main()
{   
    //variaveis
    int voto,candidato1 = 0,candidato2 = 0,candidato3 = 0,candidato4 = 0,nulo = 0,branco = 0;

    //le primeiro voto
    scanf("%d",&voto);

    //loop principal
    while(voto != 0)
    {   
        //teste de condicional
        if(voto == 1)
        {
            candidato1++;
        }//end if
        else if(voto == 2)
        {
            candidato2++;
        }//end else if 
        else if(voto == 3)
        {
            candidato3++;
        }//end else if 
        else if(voto == 4)
        {
            candidato4++;
        }//end else if 
        else if(voto == 5)
        {
            nulo++;
        }//end else if 
        else
        {
            branco++;
        }//end else

        //le proximos votos 
        scanf("%d",&voto);

    }//end while 

    printf("%d\n",candidato1);
    printf("%d\n",candidato2);
    printf("%d\n",candidato3);
    printf("%d\n",candidato4);
    printf("%d\n",nulo);
    printf("%d",branco);


    return 0;
}//end main