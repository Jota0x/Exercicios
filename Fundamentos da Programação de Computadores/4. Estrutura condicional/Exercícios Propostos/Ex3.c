// Faça um programa que receba dois números e mostre o menor.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,menor;

    scanf("%d%d",&x,&y);

    if(x < y)
    {
        menor = x;
        printf("%d",menor);
    }
    else if(y < x)
    {
        menor = y;
        printf("%d",menor);
    }
    else
        printf("Os numeros sao iguais");

    return 0;
}// end main