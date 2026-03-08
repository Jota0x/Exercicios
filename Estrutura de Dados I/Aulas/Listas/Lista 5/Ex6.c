#include <stdio.h>
#include <math.h>

int divisores(int n, int *max, int *min);

int main()
{
    int resultado; // guarda 0 ou 1;
    int num, max, min;

    scanf("%d", &num);

    resultado = divisores(num, &max, &min);

    //imprime resultado
    if (resultado == 0)
    {
        printf("Eh primo\n");
    }
    else
    {
        printf("Nao eh primo\n");

        if (num > 1)
        {
            printf("Menor divisor : %d\n", min);
            printf("Maior divisor : %d\n", max);
        }
    }

    return 0;
} // end main

int divisores(int n, int *max, int *min)
{

    if (n <= 1)
    {
        return 1; // nao é primo
    }

    *min = n;
    *max = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {

            *min = i;

            *max = n / i;

            return 1; // nao é primo

        } // end if
    }

    return 0; // é primo

} // end divisores
