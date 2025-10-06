#include <stdio.h>

int main()
{
    int n, aux = 0;
    char X[4];

    scanf("%d", &n);

    // loop principal
    for (int i = 0; i < n; i++)
    {
        scanf("%s", X);

        if (X[0] == '+' && X[1] == '+' || X[2] == '+' && X[1] == '+')
        {
            aux++;
        }
        if (X[0] == '-' && X[1] == '-' || X[2] == '-' && X[1] == '-')
        {
            aux--;
        }

    } // end for

    printf("%d", aux);

    return 0;
} // end main