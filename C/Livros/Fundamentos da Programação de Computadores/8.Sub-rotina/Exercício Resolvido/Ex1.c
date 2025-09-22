/*
Faça um programa contendo uma sub-rotina que retorne 1 se o número digitado for positivo ou 0 se
for negativo.
*/
#include <stdio.h>

int positivo(int n);

int main()
{   
    int n;

    scanf("%d",&n);

    printf("%d",positivo(n));

    return 0;
}//end main

int positivo(int n)
{
    if(n > 0)
    return 1;
    else
    return 0;
}//end positivo