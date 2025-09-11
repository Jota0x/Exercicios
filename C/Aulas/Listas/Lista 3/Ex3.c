#include <stdio.h>

// prototipo da função
void ordemCrescente(int a, int b, int c);

int main()
{
    int n, a, b, c;

    // le numero de vezes
    scanf("%d", &n);

    // loop principal
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        ordemCrescente(a, b, c);

    } // end for

} // end main

// ordemCrescente
void ordemCrescente(int a, int b, int c)
{
    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("%d %d %d\n", a, b, c);
        } // end if
        else
            printf("%d %d %d\n", a, c, b);

    } // end if
    else if (b < c && b < a)
    {
        if (a < c)
        {
            printf("%d %d %d\n", b, a, c);
        } // end if
        else
            printf("%d %d %d\n", b, c, a);
    }
    else if (c < a && c < b)
    {
        if (a < b)
        {
            printf("%d %d %d\n", c, a, b);
        } // end if
        else
            printf("%d %d %d\n", c, b, a);
    }

} // end ordemCrescente