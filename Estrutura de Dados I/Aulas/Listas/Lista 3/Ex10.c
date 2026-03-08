#include <stdio.h>

// prototipo da função
void categoriaNadador(int n);

int main()
{
    int n, idade;

    // le quantidade de vezes
    scanf("%d", &n);

    // loop principal
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &idade);

        categoriaNadador(idade);

    } // end for

} // end main

void categoriaNadador(int n)
{
    // trata categoria
    if (n >= 5 && n <= 7)
    {
        printf("F\n");
    } // end if
    else if (n >= 8 && n <= 10)
    {
        printf("E\n");
    } // end else if
    else if (n >= 11 && n <= 13)
    {
        printf("D\n");
    } // end else if
    else if (n >= 14 && n <= 15)
    {
        printf("C\n");
    } // end else if
    else if (n >= 15 && n <= 17)
    {
        printf("B\n");
    } // end else if
    else
        printf("A\n");

} // end categoriaNadador