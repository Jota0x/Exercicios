#include <stdio.h>
#include <stdlib.h>

int soma(int n);

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",soma(n));

    return 0;
}

int soma(int n)
{
    int soma = 0;

    while(n > 0)
    {
        soma += n % 10;

        n = n / 10;
    }

    return soma;

}