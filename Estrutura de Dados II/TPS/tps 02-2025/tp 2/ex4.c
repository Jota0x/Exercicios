#include <stdio.h>
#include <stdlib.h>

int somaRecursivo(int n);

int main()
{
    int n;

    scanf("%d",&n);

    printf("Resultado: %d \n",somaRecursivo(n));

    return 0;
}


int somaRecursivo(int n)
{
    if(n == 0)
        return 0;
    else
        return ( n%10 ) + somaRecursivo( n/10 );

}