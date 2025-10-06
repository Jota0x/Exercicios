#include <stdio.h>

int main()
{
    int aux, num;
    char palavra[100];

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        aux = 0;

        // le palavra
        scanf("\n%s", palavra);

        // loop principal
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            aux++;
        } // end for

        if (aux > 10)
        {
            printf("\n%c%d%c", palavra[0], aux - 2, palavra[aux - 1]);
        }
        else
            printf("\n%s", palavra);

    } // end loop

    return 0;
}
