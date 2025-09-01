//Faça um programa que receba um número, calcule e mostre a tabuada desse número
#include <stdio.h>

int main()
{
    int n;

    //le n
    scanf("%d",&n);

    //loop principal
    for(int i = 0; i <= 10;i++)
    {   
        //imprime a tabuada
        printf("\n%d",n * i);
    }//end for


    return 0;
}//end main