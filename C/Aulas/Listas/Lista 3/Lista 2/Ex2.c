#include <stdio.h>

int main()
{
    // declaração das variáveis
    long int N, numero;
    float positivo = 0, negativo = 0, zero = 0;

    // le N,quantidade de numeros lidos
    scanf("%ld", &N);

    // loop principal
    for (int i = 0; i < N; i++)
    {
        // le numero
        scanf("%ld", &numero);

        if (numero > 0)
        {
            // contabiliza os numeros positivos
            positivo++;
        } // end if
        else if (numero < 0)
        {
            // contabiliza os numeros negativos
            negativo++;
        } // end else if
        else
            // contabiliza os zeros
            zero++;
    } // end for

    printf("%.0f%% POSITIVOS", (positivo / N) * 100);
    printf("\n%.0f%% NEGATIVOS", (negativo / N) * 100);
    printf("\n%.0f%% ZEROS", (zero / N) * 100);

} // end main