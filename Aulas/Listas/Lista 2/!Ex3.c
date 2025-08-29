#include <stdio.h>

int main()
{
    // variaveis
    int divisivel3e9 = 0, divisivel2 = 0, divisivel5 = 0;
    int N;
    
    // loop principal
    for (int i = 0; i < 10; i++)
    {
        // le numero
        scanf("%d", &N);

        if (N % 9 == 0)
        {
            // contabiliza numero divisivel por 3 e por 9
            divisivel3e9++;
        } // end if
        else if (N % 5 == 0)
        {
            // contabiliza numero divisivel por 5
            divisivel5++;
            if (N % 2 == 0)
            {
                // contabiliza numero divisivel por CASO DE 10 entre outros
                divisivel2++;
            }//end if 

        } // end else if
        else if (N % 2 == 0)
        {
            divisivel2++;
        } // end else if
        else
            printf("Numero nao eh divisivel pelos valores\n");
    } // end for

    printf("%d Numeros sao divisiveis por 3 e por 9", divisivel3e9);
    printf("\n%d Numeros sao divisiveis por 2", divisivel2);
    printf("\n%d Numeros sao divisiveis por 5", divisivel5);

    return 0;
} // end main