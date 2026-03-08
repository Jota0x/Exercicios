#include <stdio.h>
#include <math.h>

int main()
{
    // variaveis
    int divisivel3e9 = 0, divisivel2 = 0, divisivel5 = 0;
    float N;

    // loop principal
    for (int i = 0; i < 10; i++)
    {
        // variavel de controle
        int divisivel = 0;

        // le numero
        scanf("%f", &N);

        if (fmod(N, 9.0) == 0)
            {
                // contabiliza numero divisivel por 3 e por 9
                divisivel3e9++;
                divisivel = 1;
            } // end if
        if (fmod(N, 5.0) == 0)
            {
                // contabiliza numero divisivel por 5
                divisivel5++;
                divisivel = 1;

            } // end else if
        if (fmod(N, 2.0) == 0)
            {
                divisivel2++;
                divisivel = 1;

            } // end else if

        if (divisivel == 0)
        {
            printf("Numero nao eh divisivel pelos valores\n");
        } // end if
    } // end for

    printf("%d Numeros sao divisiveis por 3 e por 9", divisivel3e9);
    printf("\n%d Numeros sao divisiveis por 2", divisivel2);
    printf("\n%d Numeros sao divisiveis por 5", divisivel5);

    return 0;
} // end main