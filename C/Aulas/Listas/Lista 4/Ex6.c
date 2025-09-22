#include <stdio.h>
#include <stdlib.h>

int contarDigitos(long n);

int main()
{
    long num;
    scanf("%ld", &num);
    printf("%d\n", contarDigitos(num));
    return 0;
}

int contarDigitos(long n)
{
    n = labs(n); // garante positivo
    if (n < 10)
        return 1;                     // caso base
    return 1 + contarDigitos(n / 10); // chamada recursiva
}
