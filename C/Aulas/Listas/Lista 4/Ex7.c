#include <stdio.h>

// prototipo d função
int soma(int n);

int main()
{
    int n;

    // le numero
    scanf("%d", &n);

    printf("%d", soma(n));

    return 0;
} // end main

int soma(int n)
{
    if (n < 10)
        return n;
    else
        return n % 10 + soma(n / 10);

} // end soma
