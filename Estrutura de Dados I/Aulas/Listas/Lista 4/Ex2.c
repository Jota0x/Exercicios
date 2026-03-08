#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fibonacci(n));

} // end main

int fibonacci(int x)
{
    if (x == 1 || x == 2)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
} // fibonacci