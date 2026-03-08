#include <stdio.h>

int soma(int n);

int main()
{
    int n;

    // soma
    scanf("%d", &n);

    // imprime soma
    printf("%d", soma(n));

} // end main

int soma(int n)
{
    if (n == 1)
        return 1;
    else
        return n + soma(n - 1);
} // soma