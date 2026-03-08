#include <stdio.h>

int main()
{
    float S = 0;
    int n;

    // le n
    scanf("%d", &n);

    // loop principal
    for (int i = 1; i <= n; i++)
    {
        S += 1.0 / i;
    } // end for

    printf("%.2f", S);

    return 0;
} // end main