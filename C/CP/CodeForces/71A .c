/*
#include <stdio.h>

int main()
{
    int aux = 0, num;
    char palavra[50];

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        // le palavra
        scanf("%s", palavra);

        // loop principal
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            aux++;
        } // end for

        if (aux > 10)
        {
            printf("%c%d%c", palavra[0], aux - 2, palavra[aux - 1]);
        }
        else
            printf("%s", palavra);

    } // end loop

    return 0;
}
arrumar depois */