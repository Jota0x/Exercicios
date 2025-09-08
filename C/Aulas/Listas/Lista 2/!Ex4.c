#include <stdio.h>

int main()
{
    double E = 0;
    int N;
    int fat = 1;

    // le N
    scanf("%d", &N);

    // loop principal
    for (int i = 0; i <= N; i++)
    {
        // loop secundario
        // trata fatorial
        for (int j = 1; j <= i; j++)
        {
            fat *= j;
        } // end for

        // calculo de E
        E += 1.0 / fat;

    } // end for

    printf("%.2lf", E);

    return 0;
} // end main
