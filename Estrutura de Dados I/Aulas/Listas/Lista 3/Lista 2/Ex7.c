#include <stdio.h>

int main()
{   
    //variaveis
    int a = 0,b = 1,L,aux;  

    //le L
    scanf("%d",&L);

    //loop principal
    for(int i = 0; i < L;i++)
    {
        aux = b;

        b+= a;

        a = aux;
        
        printf(" %d ",a);
    }//end for



    return 0;
}