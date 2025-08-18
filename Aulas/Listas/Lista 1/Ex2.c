#include <stdio.h>

int main()
{
    //declaração variável
    int x,y,adicao,final;

    //ler numeros 
    scanf("%d%d",&x,&y);

    adicao = x + y;

    if(adicao >= 10)
    {
        final = adicao + 5;
    }// end if 
    else 
        final = adicao + 7;

        //escreve final
        printf("%d",final);

    return 0;
}// end main