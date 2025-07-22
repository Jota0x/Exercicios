//Faça um programa que leia um número real e imprima a quinta parte desse nú-
//mero.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X,quintaParte = 0;

    scanf("%f",&X);// le real

    quintaParte = X/5;

    printf("Valor da quinta parte: %f",quintaParte);// imprime valor da quinta parte 

    return 0;
}//end main